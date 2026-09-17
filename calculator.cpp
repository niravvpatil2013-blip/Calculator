#include <iostream>//format
#include <string>//format
using namespace std;//format
int main()//format
{//format
char again = 'y';// for loop to repeat the process(practice needed)
while (again == 'y')
{
 // for input no 1
 float a;
 cout << "Enter No. 1: ";
 cin >> a;
// for input no 2
 float b;
 cout << "Enter No. 2: ";
 cin >> b;
// addition
 cout << "Addition of both numbers is: " << a + b << "\n";
 // subtraction
cout << "Subtraction of both numbers is: " << a - b << "\n";
// multiplication
cout << "Multiplication of both numbers is: " << a * b << "\n";
// division
cout << "Division of both numbers is: " << a / b << "\n";
//loop to repeat the process
cout << "Do you want to do again? (y/n): ";// ask user if they want to do again(practice needed)
cin >> again;// take input from user to repeat the process(practice needed)
}
return 0;//format
}//format