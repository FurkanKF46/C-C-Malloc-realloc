#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//FURKAN KOCA 221030910028
void matrisYazdir(int **, int,int);
int **matris;
int main(int argc, char **argv)
{
    int sutunsayisi;
    int satirsayisi;
    cout << "Matrisinizin sutun sayisini giriniz:" << endl;
    cin >> sutunsayisi;
    cout << "Matrisinizin satir sayisini giriniz:" << endl;
    cin >> satirsayisi;
   matrisYazdir(matris,satirsayisi,sutunsayisi);
  
    return 0;
}
void matrisYazdir(int **matris, int satir,int sutun)
{
     matris = (int **)calloc(satir, sizeof(int *));
   for (int i = 0; i < satir; i++)
   {
    matris[i]=(int *)calloc(satir, sizeof(int));
   }
    int i, j;
    cout<<"Matrisiniz: "<<endl;
    for (i = 0; i < satir; i++)
    {
        for (j = 0; j < sutun; j++)
        {
            cout << " "<<matris[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < satir; i++)
    {
        free(matris[i]);
        free(matris);
    }
}
