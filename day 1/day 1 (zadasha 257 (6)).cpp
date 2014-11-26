#include <iostream>
#include <conio.h>

using namespace std;

char s [1024];

int main (void) {
    
    cout << "Input a string: " << endl;
    gets(s);

    unsigned int n = 0;
    while (s[n] != '!') n++;
    
    if (n < 4) {
       cout << "Have not 2 pairs." << endl;
       getch();
       return 0;
    }
    
    unsigned int count = 0;
    for (int i = 1; i < n-1; i++)
        if (s[i] == s[i+1]) {
            count++;
            if (count == 2) {
               cout << "We have 2 pairs." << endl;
               getch();
               return 0;
            }
        }

    cout << "Have not 2 pairs." << endl;
    getch();
    return 0;
}
