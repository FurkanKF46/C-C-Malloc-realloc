#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
using namespace std;
// FURKAN KOCA 221030910028
int arama(int parametre, ...);
int main(int argc, char **argv)
{
    int aranan;
    int klasikdizi[5] = {0, 2, 4, 6, 8};
    int *modern = NULL;
    int sayac;
    modern = new int[5];
    for (int i = 0; i < 5; i++)
    {
        modern[i] = klasikdizi[i];
    }
    do {
	
	
	cout << "Aramak istediginiz sayiyi giriniz:" << endl;
    cin >> aranan;
    for (int i = 0; i < 5; i++)
    {
        if (modern[i] == aranan)
        {
            cout << endl;
            cout << "Aranan sayi bulundu" << endl;
            sayac = 0;
            break;
        }
        else
        {
            cout << "   "
                 << "Araniyor..."
                 << "   ";
            sayac = 1;
        }
    }
    if (sayac == 1)
    {
        cout << endl;
        cout <<aranan<< " sayisi bulunamadi"<<endl;
    }
} 
while(0<sayac);
    delete[] modern;
    modern = NULL;
    return 0;
}
