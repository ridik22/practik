#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int MAX(int a, int b){
	return (a>b)?a:b;
}

int main(){
	srand(time(NULL));

	cout <<"Input k,l,m :";
	int k,l,m, Mx,My,Mz;
		cin >>k>>l>>m;
		
	float X[100],Y[100],Z[100];
	
		int i=0;
			while(i<=100){
				
			/*	if(i<=k){
					X[i]=rand()%21;
					if(i==0){ Mx=X[i]; }
					if(i>0){ Mx=MAX(X[i],Mx); }					
				}*/
				if(i<l){
					Y[i]=rand()%21;
					if(i==0){ My=Y[i]; }
					if(i>0){ My=MAX(Y[i],My); }	
				}
				if(i<m){
					Z[i]=rand()%21;
					if(i==0){ Mz=Z[i]; }
					if(i>0){ Mz=MAX(Z[i],Mz); }	
				}
			i++;
			}
	int Ni=0;
	while(Ni<k){
		cout << "Input x: ";
		cin >> X[Ni];
			if(Ni==0){ Mx=X[Ni]; }
			if(Ni>0){ Mx=MAX(X[Ni],Mx); }	
		Ni++;				
	}		

			
	cout << endl;			
	while(k>0){
		cout << X[k-1] << " ";
		k--;
	}	cout << endl;
			while(l>0){
				cout << Y[l-1] << " ";
				l--;
			}	cout << endl;
					while(m>0){
						cout << Z[m-1] << " ";
						m--;
					}	cout << endl;
			
	float t;
		if(Mx>=0){ t=(My+Mz)/2; }
	else	t=(1+(Mx*Mx));
	cout << "\n\n\t t = " << t;		

 getch();
}
