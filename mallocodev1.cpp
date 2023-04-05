#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
// FURKAN KOCA 221030910028
int main(int argc, char **argv)
{
    int *sayilar = NULL;
    sayilar = (int *)malloc(sizeof(int) * 2);
    int i = 0;
    for (i = 0; i < 2; i++)
    {
        cout << i + 1 << ".sayiyi giriniz" << endl;
        cin >> sayilar[i];
    }
    sayilar = (int *)realloc(sayilar,sizeof(int) * 3);
    int toplam = sayilar[0] + sayilar[1];
    sayilar[2] = toplam;
    cout << "Toplam: " << toplam;
    free(sayilar);
    sayilar =NULL;
    return 0;
}