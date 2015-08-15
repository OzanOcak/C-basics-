#include <iostream>


using namespace std;

void timeMachine(int* year)
{
cout<<"it used to be "<< *year <<endl;
*year=2023;

}

void turnToTime(int& year)
{
year=2015;
}

int main()
{

int theYear=2015;

int* yearPointer= &theYear;

cout<<"Address of the pointer : "<< yearPointer<<endl;

cout<<"data at memory address : "<< *yearPointer<<endl;

timeMachine(&theYear);

cout<<"the year is " << theYear <<" right now"<<endl;

int& yearRef = theYear;

turnToTime(yearRef);

cout<<"the year is again "<< yearRef<<endl;


}
