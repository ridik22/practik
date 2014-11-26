/*46. Тэг курсива. Дан текст, в котором встречаются структуры
<i> и </i>. Заменить каждое вхождение <i> на <курсив>, а
каждое вхождение </i> на <конец курсивах Замечание. В программе
следует учесть, что буква i может быть как строчной,
так и прописной.*/
#include <iostream>
#include <conio.h>

using namespace std;

char s [1024];
unsigned int n;
char s1 [1024];
unsigned int index = 0;
char italic [] = "<praktik>";
char italic2 [] = "</praktik>";

int main (void) {
    
    cout << "Input a string: " << endl;
    cin >> s;
    
    //for (n = 0; s[n]; n++);
    n = strlen(s);
    
    int i = 0;
    for (; i<n; i++) {
        if (s[i] == '<') {
            if ((i < n-2) && ((s[i+1] == 'i') || (s[i+1] == 'I')) && (s[i+2] == '>')) {
                for (int j=0; s1[index]=italic[j]; index++,j++);
                i += 2;
            } else if ((i < n-3) && (s[i+1] == '/') &&
                       ((s[i+2] == 'i') || (s[i+2] == 'I')) &&
                       (s[i+3] == '>')) {
                for (int j=0; s1[index]=italic2[j]; index++,j++);
                i += 3;
            } else {
                s1[index] = s[i];
                index++;
            }
        } else {
             s1[index] = s[i];
             index++;
        }
    }
    s1[index] = s[i];
    
    for (i = 0; s[i]=s1[i]; i++);
    
    cout << "Have a string : " << endl << s << endl;
    
    getch();
    
    return 0;
}

