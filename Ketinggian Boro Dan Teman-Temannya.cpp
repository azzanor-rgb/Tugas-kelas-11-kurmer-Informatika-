#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int N;
    float S, V, T;
    const float g = 10.0;
    const float phi = 3.141592653;

    printf ("Masukkan Jumlah Burung: ");
    scanf("%d", &N);
    printf ("Masukkan Sudut Peluncuran: ");
    scanf("%f", &S);
    printf ("Masukkan Kecepatan Awal: ");
    scanf("%f", &V);
    printf ("Masukkan Tinggi Pohon: ");
    scanf("%f", &T);

    float hsin = sin((S*phi)/180);         
    float hsinkuadrat = hsin * hsin;
    int vo = V*V;
    for (int i = 1; i <= N; i++) 
    {
     float hasil = (vo * hsinkuadrat) / (2 * g);
     if (hasil >= T) {
     printf("%d : 1\n", i);
     } else {
     printf("%d : 0\n", i);
     }
     printf("%.2f\n", hasil);
     if (i < N) {
     printf ("Masukkan Sudut Peluncuran: ");
     scanf("%f", &S);
     printf ("Masukkan Kecepatan Awal: ");
     scanf("%f", &V);
     printf ("Masukkan Tinggi Pohon: ");
     scanf("%f", &T);
     }
    }
    return 0;
}
