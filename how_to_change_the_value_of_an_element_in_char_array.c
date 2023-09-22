#include <stdio.h>
#include <string.h>

void eldontes_negy(char a, char b, char c, char d, char e[4]){
    char teljes[5][3] = {"NO ", "NO ", "NO ", "NO "};
    if (a == e[0]) strcpy(teljes[0], "OK ");
    if (b == e[1]) strcpy(teljes[1], "OK ");
    if (c == e[2]) strcpy(teljes[2], "OK ");
    if (d == e[3]) strcpy(teljes[3], "OK ");

    printf("%s\n", teljes[0]/*, teljes[1], teljes[2], teljes[3]*/);
}

int main() {
    char bekeres_egy = 'a';
    char bekeres_ketto = 'b';
    char bekeres_harom = 'c';
    char bekeres_negy = 'd';
    char jo[4] = "abcd";
    eldontes_negy(bekeres_egy, bekeres_ketto, bekeres_harom, bekeres_negy, jo);
    return 0;
}
