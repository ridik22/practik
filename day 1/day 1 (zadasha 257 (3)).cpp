#include <iostream>
#include <conio.h>

using namespace std;

char s [1024];
char word [] = "abcd";
bool exist [4] = {false, };

int main (void) {
    
    cout << "Input a string: " << endl;
    gets(s);

    unsigned int j;
    for (int i = 0; s[i] != '!'; i++) {
        j = 0;
        while ((word[j] != 0) && (word[j] != s[i])) j++;
        if (word[j] != 0) exist[j] = true;
    }
    j = 0;
    while ((j < 4) && exist[j]) j++;
    
    if (j < 4)
        cout << "Have not word." << endl;
    else
        cout << "We have a word." << endl;
    
    getch();
    return 0;
}
