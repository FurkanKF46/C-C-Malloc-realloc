#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
// FURKAN KOCA 221030910028
int main(int argc, char **argv)
{

    int *sayilar;
    int toplancaksayi = 2;
    int toplam = 0;
    sayilar = (int *)malloc(sizeof(int) * toplancaksayi);
    for (int i = 0; i < 2; i++)
    {
        cout << i + 1 << ". sayiyi giriniz" << endl;
        cin >> sayilar[i];
    }
    do
    {
        sayilar = (int *)realloc(sayilar, toplancaksayi+1 * sizeof(int));

        for (int i = 0; i < toplancaksayi; i++)
        {
            toplam = toplam + sayilar[i];
        }
        sayilar[toplancaksayi] = toplam;
        toplancaksayi++;
        toplam=0;
    } while (toplancaksayi < 10);

    for (int i = 0; i < toplancaksayi; i++)
    {
        cout << i + 1 << ".deger: " << sayilar[i] << endl;
    }
    free(sayilar);
    sayilar = NULL;
    return 0;
}
