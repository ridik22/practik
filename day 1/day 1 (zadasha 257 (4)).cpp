#include <iostream.h>
#include <string.h>
#include <conio.h>
int main()
{
  char str[120];
  cout <<"Vvedit text:";
  gets(str);
  int kol=0;
  int l = strlen(str);
  int s;
  for (int i=0; i<l; i++)
  {
      if (str[i]=='!')s++;
       if (str[i]=='n',str[i]=='o') kol++;
       }
  if (s<1)
  cout<<"Nema znaky okluky!";
  else{
  if (s>1)
  cout<<"Treba tilki 1 znak okluky!";
  else{
  if (kol>=1)
  cout <<"Tak, prisutni, kilkist: " << kol;
  else cout <<"ne prisutni";}}
  getch();
  return 0;}
