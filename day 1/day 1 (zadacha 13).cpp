# include <iostream>
# include <conio.h>
# include <string.h>
# include <stdio.h>

using namespace std;


int main ()
{
setlocale(0, "rus");
char str_start_t [500];
cout<<"¬ведiть слово : ";
gets (str_start_t);
char *str=new char[strlen(str_start_t)];
str=str_start_t;

for (int i=0;i<strlen(str_start_t);i++)
{
	if (!((str[i]>=65)&&(str[i]<=90)||(str[i]>=97)&&(str[i]<=122)))
	cout<<str[i];
}
getch();
return 0;    
}
