#include <iostream>
#include <conio.h>

using namespace std;

char s [1024];

int main (void) {
    
    cout << "Input a string: " << endl;
    gets(s); 
    bool flag = false;
    for (int i = 0; s[i] != '!'; i++)
        if (s[i] == 'y') flag = true;
        
    if (flag)
        cout << "In string we have symbol y." << endl;
    else
        cout << "In string we have not symbol y." << endl;
    
    getch();
    return 0;
}
