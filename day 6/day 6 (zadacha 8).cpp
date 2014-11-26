# include <iostream>
# include <conio.h>
# include <time.h>
# include <fstream>
# include <stdlib.h>

using namespace std;
void star (int ,ofstream *);
char save_file (void);

int *a=new int [1000];
int max_z=5;

int main ()
{
srand(time (NULL));
cout<<"Vvedite cholichestvo chifer = ";
cin>>max_z;
for (int i=0;i<max_z;i++)
{
a[i]=rand()%9+1;
cout<<a[i]<<" ";	
}
save_file ();
getch ();
return 0;    
}

void star (int stop, ofstream & f)
{
	for (int i=0;i<=stop;i++)
	{
		f<<a[i];
		if (i<stop)
		{
			f<<"*";
		}
	}
	f<<"=";
}

char save_file (void)
{
	ofstream file;
	file.open ("1231231321231231231.txt", ios::out);
	double summ=0;
	summ=a[0];
	file<<summ<<endl;
	for (int i=1;i<max_z;i++)
	{
		summ*=a[i];
		star (i, file);
		file<<summ<<endl;	
	}
}
