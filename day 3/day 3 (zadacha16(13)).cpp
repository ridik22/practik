# include <iostream>
# include <conio.h>
# include <Windows.h>
# include <math.h>
using namespace std;
double funktions_13 (double );
int main (void)
{
double a,b,h;
setlocale(0,"rus");
for (int i=0;i!=1;)
{
cout<<"¬кажiть початок дiапазону: ";
cin>>a;
cout<<endl<<"¬кажiть кiнець дiапазону: ";
cin>>b;
cout<<endl<<"¬кажiть крок дiапазону: ";
cin>>h;
if (a>b)
swap(a,b);
if ((a==b)||(h>=b)||(h<=0))
{
cout<<"Crash system error!!!";
getch ();
}
else 
i++;
}
for (double i=a;i<b;i+=h)
{
if ((i>=-5)&&(i<=5)&&(h==0.4))
funktions_13 (i);
}
getch ();
return 0;    
}
double funktions_13 (double x)
{
cout<<"13. "<<atan(x)/((x*x)-5*x+6)<<endl;
}


