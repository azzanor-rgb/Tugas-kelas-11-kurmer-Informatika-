#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int S;
    float V, T;
    const float phi = 3.141592653;
    const float g = 10; 

    printf ("Sudut Boro: ");
    scanf("%d", &S);
    printf ("Kecepatan Awal Boro: ");
    scanf("%f", &V);
    printf ("Ketinggian Boro: ");
    scanf("%f", &T);

    
    float hsin = sin((S*phi)/180);
    float hsinkuadrat= hsin*hsin;
    int vo = V*V;

    float hasil = (vo*hsinkuadrat)/(2*10);

    if (hasil >= T) {
        printf("Status:1\n");
    } else {
        printf("Status:0\n");
    }
    printf("Keluaran: %.2f\n", hasil);

    return 0;
}
