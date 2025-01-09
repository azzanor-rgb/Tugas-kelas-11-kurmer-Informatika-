#include <stdio.h>
#include <cmath>

using namespace std;
int main()
{
    int S,V;
    
    const float g = 10;
    const float phi = 3.14159265;
    printf ("Masukkan Sudut Boro: ");
    scanf ("%d",&S);
    printf ("Masukkan Kecepatan Boro: ");
    scanf ("%d",&V);
    
    
    float hsin = sin((S*phi)/180);
    
    float hasil = (2*V*hsin)/g;
    printf("Hasilnya Adalah %.3f",hasil);
   
    return 0;
}
