#include <iostream>

using namespace std;

class car
{
private:
    string make;
    string model;
    int year;
    double price;
public:
    car()
    {
        make = " ";
        model = " ";
        year = 0;
        price = 0.0;
    }

    void displayInfo()
    {
        cout<<"Make of Car is "<<make<<endl;
        cout<<"Model of Car is "<<model<<endl;
        cout<<"Price of Car is "<<price<<endl;
        cout<<"Make Year of Car is "<<year<<endl;
    }


    void setMake(string make)
    {
        this->make = make;
    }


    void setModel(string model)
    {
        this->model = model;
    }


    void setPrice(double price)
    {
        this->price = price;
    }


    void setYear(int year)
    {
        this->year = year;
    }

    string getModel()
    {
        return model;
    }

    string getMake()
    {
        return make;
    }

    double getPrice()
    {
        return price;
    }

    int getYear()
    {
        return year;
    }
};

class dealership
{
private:
    static const int maxCar = 100;
    int numCar;
    car c1[maxCar];

public:

    dealership()
    {
        numCar = 0;
    }

    void addCar(car c2)
    {
       if(numCar < maxCar)
       {
           c1[numCar] = c2;
           numCar++;
       }
    }

    void displayInventory()
    {
        for(int a = 0; a < numCar; a++)
        {
            cout<<"Make of Car is "<<a+1<<" "<<c1[a].getMake()<<endl;
            cout<<"Model of Car is "<<a+1<<" "<<c1[a].getModel()<<endl;
            cout<<"Price of Car is "<<a+1<<" "<<c1[a].getPrice()<<endl;
            cout<<"Make Year of Car is "<<a+1<<" "<<c1[a].getYear()<<endl;
        }
    }
};

int main()
{
   cout<<"____________________________________WELCOME TO TOYOTA DEALERSHIP________________________________________"<<endl;
   int number;
   cout<<"Please add how many cars you want to add in dealership"<<endl;
   cin>>number;

   string make = " ";
   string model = " ";
   int year = 0;
   double price = 0.0;


   car c1[3];
   for(int a = 0; a < number; a++)
   {
     cout<<"Please Enter Model of Car "<<a+1<<endl;
     cin>>model;

     cout<<"Please Enter Make of Car "<<a+1<<endl;
     cin>>make;

     cout<<"Please Enter Price of Car "<<a+1<<endl;
     cin>>price;

     cout<<"Please Enter Make Year of Car "<<a+1<<endl;
     cin>>year;

     c1[a].setModel(model);
     c1[a].setMake(make);
     c1[a].setYear(year);
     c1[a].setPrice(price);
   }

    char choice;
    cout<<"Please Enter Y if you want to display Car's Information"<<endl;
    cin>>choice;

    if(choice == 'Y' || 'y')
    {
      cout<<"_________________________INFORMATION OF CARS__________________________"<<endl;
      for(int a = 0; a < number; a++)
      {
          cout<<" Car: "<<a+1<<endl;
          c1[a].displayInfo();
      }
    }

   dealership d1;

   for(int a = 0; a < number; a++)
   {
       d1.addCar(c1[a]);
   }

   char choice1;
   cout<<"Please Enter Y if you want to display Inventory"<<endl;
   cin>>choice1;

   if(choice1== 'Y' || 'y')
   {
       d1.displayInventory();
   }

    char exitChoice;
    cout << "Do you want to exit the program? (Y/N)" << endl;
    cin >> exitChoice;

    if (exitChoice == 'Y' || exitChoice == 'y')
    {
        cout << "EXITING THE PROGRAM" << endl;
        cout << "________________________THANKS FOR VISITING______________________" << endl;
        return 0;
    }

     else
    {
        main();
    }

    return 0;
}
