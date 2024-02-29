#include <iostream>

using namespace std;

class car
{
  private:
  int year;
  float price;
  public :
  car ();
  car(int y, float p);
  void setYear(int y);
  int setPrice(float p);
  int getYear();
  void displayDetails();
  ~car();
};
car::car()
{
    year =0;
    price =0;
}
car::car (int y, float p)
{
    year = y;
    price = p;
}
void car::setYear(int p)
{
    price = p;
}
int car :: getYear()
{
    return year ;
}
float car::getPrice()
{
    return price;
}

void car::displayDetails()
{
    cout << "Price;" << price << ","<< "Published Year:" << year << endl;
}
car :: ~car()
{
    cout << " Indide Destructor"<< endl;
}


int main()
{
    car car1(2010 , 10000), car2 ( 2020 , 20000);
    
    car1.displayDetails();
    car2.displayDetails();
    /// find the latest car
    if (car1 .getYear() > car2.getYear())
    {
        cout << " car1 is the ;larest car" << endl;
    }
    else if ( car1.getYear() < car2.getYear())
    {
        cout << " car2 is the letest car" << endl;
    }
    else 
    {
        cout << " Both have published in the same year" << endl;
    }
    
    /// find the car with highest Price
    if ( car1.setPrice() >= car2.setPrice())
    {
        cout << " Car1 >= Car2 " << endl;
    }
    
    return 0;
}
