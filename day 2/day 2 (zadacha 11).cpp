#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

typedef unsigned int uint;

const uint N = 100;
uint people[N];
uint n;
uint m;

int main (void) {
    
    // ������� ������� ����� �� ��������� �����
    cout << "Input n (n<=100): ";
    cin >> n;
    for (uint i = 0; i < n; i++)
       people[i] = i+1;
    // ������� m
    cout << "Input m (m>0): ";
    cin >> m;
    // �������� ����������� "��������"
    uint idx = 0;
    while (n > 1) {
       idx = (idx + m - 1) % n;
       for (uint i = idx+1; i < n; i++)
          people[i-1] = people[i];
       n--;
       if (idx == n) idx = 0;
       for (uint i = 0; i < n; i++)
          cout << people[i] << " ";
       cout << endl;
    }
    // �������� ����� ������, �� ����������
    cout << "Last subject: " << people[0] << endl;
    
    getch();
    return 0;
}
