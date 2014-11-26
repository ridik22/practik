#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

typedef unsigned int uint;
typedef unsigned short int ushort;

const uint N = 10;
uint cubes[N][N][N];
uint n;

int main (void) {
   
    // введемо розмірність куба
    cout << "Input n (n<=10): ";
    cin >> n;
    // згенеруємо куб
    srand(time(NULL));
    for (uint i = 0; i < n; i++)
       for (uint j = 0; j < n; j++)
          for (uint k = 0; k < n; k++)
             cubes[i][j][k] = rand() % 2;
    // роздрукуємо куб по площинам
    for (uint i = 0; i < n; i++) {
       cout << "floor " << i << ":" << endl;
       for (uint j = 0; j < n; j++) {
          for (uint k = 0; k < n; k++)
             cout << cubes[i][j][k] << " ";
          cout << endl;
       }
    }
    
    getch();
    return 0;
}
