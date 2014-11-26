#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int N; 
    cout<<"Vvedite poriadok"<<'\n'<< "N=";
    cin>>N;

    int *X = new int[N];
    int *Y = new int[N];
    int *B = new int[N];

    int **A = new int*[N];
    for (int i = 0; i < N; i++)
        A[i] = new int[N];


    for(int i=0;i<N;i++)
    {
        cout<<"Vvedite "<<"X("<<i<<")"<<'\n'<<"X("<<i<<")=";
        cin>>X[i]; 
    }
    for(int i=0;i<N;i++)
    {
        cout<<"Vvedite "<<"Y("<<i<<")"<<'\n'<<"Y("<<i<<")=";
        cin>>Y[i]; 
    } 
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<"Vvedite "<<"A("<<i<<","<<j<<")"<<'\n'<<"A("<<i<<","<<j<<")=";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<N;i++)
    {
        B[i]=0; 
        for(int j=0;j<N;j++)
        {
            B[i]=B[i]+A[i][j]*(X[j]+Y[j]);
        }
    }

    for(int i=0;i<N;i++)
    {

        cout<<B[i]<<'\n'; 
    }
    cout<<"Najmite lubuu simvolnuu klavishu a posle Enter"; 
    getch();

    delete[] X;
    delete[] Y;
    delete[] B;

    for(int i = 0; i < N; i++)
        delete[] A[i];
    delete[] A;
    getch ();
    return 0; 
}
