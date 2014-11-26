#include <iostream>
#include <conio.h>

using namespace std;

char s [1024];

int main (void) {
    
    cout << "Input a string: " << endl;
    gets(s);
    cout << "Have a string: " << endl << s << endl;

    unsigned int count = 0;
    for (int i = 0; s[i] != '!'; i++)
    if (s[i] == ' ') count++;
    cout << "In string we have spaces: " << count << endl;
    
    
    getch();
    return 0;
}
