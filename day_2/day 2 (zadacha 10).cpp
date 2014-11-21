#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;



int main()
{
	setlocale (0,"rus");
    int size,change=0,x1=0,y1=0;
    cout<<"Здайте розмiрнiсть = ";
    cin >> size;
	srand(time(NULL));
	//створюємо динам. масив А
	int** A = new int* [size];
 	for(int i = 0; i < size; i++)
 	{
 	A[i] = new int [size];
	 }
	
 	  
    // заповняємо створюємо масив А
    cout<<endl<<" A мас."<<endl;
    for (int x = 0; x < size; x++)
    {
    for (int y = 0; y < size; y++)
    {
         A[x][y]=rand()%9+1;
         cout<< A[x][y]<<" ";
    }
    cout<<endl;
	}
	

	
	cout<<endl;
//сортування
for (int i=0,st_l=0;i <=9;i++)
{
	for(int x = 0; x < size; x++)
	{
	    for(int y = 0; y < size; y++)
	      {
	      	if (y1==size)
		    {
		    y1=0;
		    } 	
		    if (st_l==size)
			{
			st_l=0;
			cout<<endl;	
			}
	      		if (A[x][y]==i)
	          	{
				cout<<A[x][y]<<" ";
				st_l++;
				}
	      }
	}
}

	getch ();
    return 0;
}


