/*68.	Ввести з клавіатури текст довільного розміру і після натискання <Еnter> вивести його у вигляді "рядка, що біжить" у центрі 
екрана знизу-вверх. Швидкість прямування рядка зазначити і зв'язати з вбудованим таймером ПЕОМ.*/
#include <stdio.h>
#include <unistd.h>
#include <windows.h> 

 
int main(int argc, const char* argv[])
{
   const char text[] = "Praktika PS 3-1";
 
   size_t i = 0, j;
 
   while (1)
   {
      for (j = i; j > 0; --j)
      {
         printf(" ");
      
      }

      printf("%.*s", 80-i-1, text);
 
      if (80 == ++i)
      {
         i = 0;
      }
 
      printf("%c", 13);

Sleep(50); 
    
   }
 
   return 0;
}
