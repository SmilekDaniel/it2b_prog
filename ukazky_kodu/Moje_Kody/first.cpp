#include <stdio.h>

int main() {
    char str[25];
    int konec = 0;
    printf("Nacti slovo (max 25 pismen)");
    scanf_s(" %s", str);
    int i = 0;
    while(konec < 1){
        if(str[i] == 0){
            konec = 1
        }else{
            i++
        }
    }
    return 0;
}