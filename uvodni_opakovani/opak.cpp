#include <stdio.h>

int main() {
   int H, M;
   float S, V;
   printf("Zadej hodinu a minuty kdy letadlo odleta(Hodina mezera Minuta)");
   scanf("%d %d", &H, &M);
   printf("\n Zadej rychlost letadla");
   scanf("%f", &V);
   printf("\n Zadej delku trasy");
   scanf("%f", &S);
   
   int delkaLetuM = (S / V) * 60;
   int delkaLetuH = delkaLetuM / 60;
   delkaLetuM %= 60;
   printf("%d %d", delkaLetuH, delkaLetuM);


   return 0;
}
