#include <iostream.h>
#include <string.h>
#include <conio.h>
int main(void)
{
    int i;
    int flag=0;
    char str[120];
    printf("Enter str: ");
    gets(str);
    int l = strlen(str);
    int s=0;
  for (int i=0; i<l; i++)
    {
           if (str[i]=='!')s++;
        if(str[i]==str[i+1])
        {
            flag=1;}}
  if (s<1)
  cout<<"Nema znaky okluky!";
  else{
  if (s>1)
  cout<<"Treba tilki 1 znak okluky!";
  else{
  flag ? printf("Yes") : printf("No");}}
    getch();
    return 0;}
