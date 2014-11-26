#include <iostream.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
int n,m;
int wid=0;
int main ()
{
cout<<"vvedit diapazon:";
cin>>n>>m;
int i=n;

        while(n<=m){
                    while(i!=0){
                                if(n%i==0){ wid++; }
                    i--;}
                               
           if(wid==3){
        cout<<"\n\n "<<n<<"  "<<endl;}
        n++;
        wid=0;
         i=n;
       }
getch ();
}
