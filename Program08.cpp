#include <stdio.h>

int main() {
    float basic, da, pf, hra, gross, netsal, bonus, society;
    float ma=300;
    printf("\nEnter basic payment: ");
    scanf("%f", &basic);

    da = (basic * 10) / 100;
    hra = (basic * 7.5) / 100;
    pf = (basic * 12.50) / 100;
    bonus = (basic * 110) / 100;
    society = (basic * 5) / 100;

    gross = basic + hra + da + ma + bonus;
    netsal = gross - pf - society;

    printf("\nBasic salary: %.2f", basic);
    printf("\nDaily allowance: %.2f", da);
    printf("\nProvident fund: %.2f", pf);
    printf("\nHouse rent allowance: %.2f", hra);
    printf("\nYour Bonus is %.2f", bonus);
    printf("\nSociety %.2f", society);
    printf("\nYour Gross salary: %.2f", gross);
    printf("\nYour net salary: %.2f", netsal);
}