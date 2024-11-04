// LAB-2 program of function overloading for evaluation
#include<iostream>
using namespace std;

int marks( float a=0.0, int b=0)
{
 cout << "marks for attendance out of 10: " << a << endl;
 cout << "marks for lab work out of 50: " << b << endl;
 cout << "\n";
 return a+b;
}

int marks( int a=0, int b=0 , int c=0)
{
 cout << "marks for attendance out of 10: " << a << endl;
 cout << "marks for lab work out of 50: " << b << endl;
 cout << "marks for theory out of 50: " << c << endl;
 cout << "\n";
 return a+b+c;
}



int main()
{
 int a=0, lab, theory, oops=0,psd=0 ;
 float attendance, perc, perc1;

 cout << " For entering marks:\n 1- OOPS \n 2- PSD \n enter your choice: ";
 cin >> a;

 switch(a)
 { case 1:
    cout<< "enter marks for attendance out of 10: ";
    cin >> attendance;

    cout << "enter marks for lab work out of 50: ";
    cin >> lab;
    cout << "\n";

    oops= marks(float(attendance),lab);
    perc= (oops/float(60))*100;
    cout << "total marks in oops out of 60: " << oops << endl;
    cout << "total percentage: " << perc << endl;
    break;

   case 2:
    cout<< "enter marks for attendance out of 10: ";
    cin >> attendance;

    cout << "enter marks for lab work out of 50: ";
    cin >> lab;

    cout << "enter marks for theory out of 50: ";
    cin >> theory;
    cout << "\n";

    psd= marks(int(attendance),lab,theory);
    perc1= (psd/float(110))*100;
    cout << "total marks in psd out of 110: " << psd << endl;
    cout << "total percentage: " << perc1 << endl;
    break;
 } 

}