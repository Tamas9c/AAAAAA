#include <stdio.h>
#include <string.h>

void eldontes_negy(char* a, char b, char c, char d, char e[4][1]){
    char teljes[4][2] = {"NO", "NO", "NO", "NO"};
    if (a == e[0]) {
        strcpy(teljes[0], "OK");
    }


    printf("%s %s %s %s\n", teljes[0], teljes[1], teljes[2], teljes[3]);
}

int main() {

    return 0;
}
