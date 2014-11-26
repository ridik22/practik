#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

typedef unsigned int uint;

const uint m = 5;
const uint n = 4;
uint K [m][n];
uint sums [m];

int main (void) {
    
    // �������� ������� � ����������� �������
    srand(time(NULL));
    for (uint i = 0; i < m; i++)
       for (uint j = 0; j < n; j++)
          K[i][j] = rand() % 1000;
    // �������� ����������� ������� �� �����
    cout << "Have matrix:" << endl;
    for (uint i = 0; i < m; i++) {
       for (uint j = 0; j < n; j++)
          cout << "\t" << K[i][j];
       cout << endl;
    }
    // ���������� ���� ���� � ������� �����
    for (uint i = 0; i < m; i++) {
       sums[i] = 0;
       for (uint j = 0; j < n; j++) {
           uint x = K[i][j];
           while (x > 0) {
              sums[i] += x % 10;
              x /= 10;
           }
       }
    }
    // �������� �� ����� ������� ��������
    cout << "sums: " << endl;
    for (uint i = 0; i < m; i++)
       cout << "\t" << sums[i] << endl;
    // ������� �������� ������ sums �� ����������
    for (uint i = 0; i < m-1; i++) {
       uint min = i;
       for (uint j = i+1; j < m; j++)
          if (sums[j] < sums[min])
             min = j;
       if (min != i) {
          uint t = sums[min];
          sums[min] = sums[i];
          sums[i] = t;
          for (uint k = 0; k < n; k++) {
             t = K[min][k];
             K[min][k] = K[i][k];
             K[i][k] = t;
          }
       }
    }
    // �������� ����������� ������� �� �����
    cout << "Have sorted matrix:" << endl;
    for (uint i = 0; i < m; i++) {
       for (uint j = 0; j < n; j++)
          cout << "\t" << K[i][j];
       cout << endl;
    }
    // �������� �� ����� ���������� ��������
    cout << "sorted sums: " << endl;
    for (uint i = 0; i < m; i++)
       cout << "\t" << sums[i] << endl;
    
    getch();
    return 0;
}
