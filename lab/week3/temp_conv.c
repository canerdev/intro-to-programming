#include <stdio.h>

int main() {
    float temp_in_fahr;
    float temp_in_cels;

    printf("Enter Fahrenheit:");
    scanf("%f", &temp_in_fahr);
    
    temp_in_cels = (5.0 / 9) * (temp_in_fahr - 32); // 5 / 9 yaparsak int olur ve virgulden oncesini alir sadece dolayisiyla sadece sifir sonucunu alir surekli
    printf("%.2f fahrenheit is %.3f celcius\n", temp_in_fahr, temp_in_cels);
    
    return 0;
}