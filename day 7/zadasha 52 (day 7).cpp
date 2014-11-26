#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main(){
           
       srand(time(0));            

       unsigned long int k, m, q, c1, c2; 
       
       ofstream out1("file_1(zadasha52).txt");
       ofstream out2("file_2(zadasha52).txt");
       
       cout<<"VVedit kilkist elementiv 1-go faily: ";
       cin>>c1;
       
       for(int i=0; i<c1; i++){
               
               out1<<rand()%9;
               out1<<"\n";
       
       }
       
       out1.close();
       
       cout<<"VVedit kilkist elementiv 2-go faily: ";
       cin>>c2;

       for(int i=0; i<c2; i++){
               
               out2<<rand()%9;
               out2<<"\n";
       
       }
       
       out2.close();
       
       unsigned long int a[c1], b[c2], c[c1+c2];
       
       printf("    V fail #1 zapicano:\n");
       
       ifstream in1("file_1(zadasha52).txt");

       for(unsigned long int i=0; i<c1; i++){
                 
	     in1>>a[i];
	     cout<<a[i]<<" ";

	     
	   }
	   
	   in1.close();
         
       printf("\n    V fail #2 zapicano:\n");
       
       ifstream in2("file_2(zadasha52).txt");

       for(unsigned long int i=0; i<c2; i++){
                 
	     in2>>b[i];
	     cout<<b[i]<<" ";

	     
	   }
	   
	   in2.close();
 
       for(unsigned long int j=c1-1; j>0; j--){
           
    		for(unsigned long int i=0; i<j; i++){
                         
                    if (a[i]>a[i+1]){
                                     
        				q=a[i];
        				a[i]=a[i+1];
        				a[i+1]=q;
        				
        			}
    	        }
       }
      
       for(unsigned long int j=c2-1; j>0; j--){
                    
    		for(unsigned long int i=0; i<j; i++){
                         
                    if (b[i]>b[i+1]){
                                     
        				q=b[i];
        				b[i]=b[i+1];
        				b[i+1]=q;
        				
        			}
    	        }
       }
      
      
       printf("\nRezyltat\n");
       printf("File #1 (vidsortovano)\n" );
       
       ofstream out4("file_1(zadasha52).txt");
       ofstream out5("file_2(zadasha52).txt");
       
       for(unsigned long int i=0; i<c1; i++){
                    
           out4<<a[i];
           out4<<"\n";
           printf("%d ", a[i]);
           
       }  
       
       out4.close();
       
       printf("\nFile #2 (vidsortovano)\n");
       
       for(unsigned long int i=0; i<c2; i++){
           
           out5<<a[i];
           out5<<"\n";
           printf("%d ", b[i]);
           
       }  
	
       out5.close();
       
	   for(unsigned long int i=0, h=0, j=1; i<=c1+c2-1; i++, h=h+2, j=j+2){
                    
           c[h]=a[i];
           c[j]=b[i];
           
       }
       
               
   	   for(unsigned long int j=c1+c2-1; j>0; j--){
                    
        		for(unsigned long int i=0; i<j; i++){
                             
                        if (c[i]>c[i+1]){
                                         
            				q=c[i];
            				c[i]=c[i+1];
            				c[i+1]=q;
            				
            			}
        	        }
          }
      
       printf("\n");
       printf("Result: File #3\n");

       ofstream out3("file_3(zadasha52).txt");
       
       for(int i=0; i<c1+c2; i++){
               
               out3<<rand()%9;
               out3<<"\n";
               cout<<c[i]<<" ";
       
       }
       
       out3.close();
       
       getch();
       return 0;
       
}
