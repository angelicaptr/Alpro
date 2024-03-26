#include <stdio.h>
#include <stdlib.h>
int main(){
    int N;
    int total;

    printf("======================================\n:");
    printf("Masukkan angka = ");
    scanf("%d", &N);
    printf("======================================\n:");
    if (N > 0)
    {
        printf("Bilangan Sempurnanya adalah:");
        for (int i = 1; i <= N; i++)
        {
            total = 0;
            for (int j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    total = total + j;
                }
            }
            if (total == i)
            {
                printf("%d ", i);
            }
        }
    }
    else
        printf("Masukan tidak boleh negatif");
    
    return 0;
}