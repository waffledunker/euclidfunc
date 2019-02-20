#include <stdio.h>
#include <stdlib.h>

int main(){




    int gcd(int a, int b) {// euclid func

    return ( b == 0 ? a : gcd(b, a % b) );
}

    int temp1 = 0; // input temp
    int temp2 = 0;

    printf("euclid gcd hesaplama programina hosgeldiniz! Devam etmek icin bir tusa basin.\n\n\n");
    getchar();
    printf("1.rakami giriniz:\n");
    scanf("%d",&temp1);
    printf("2.rakami giriniz:\n");
    scanf("%d",&temp2);

    printf("sonuc: %d",gcd(temp1,temp2)); // result


}









