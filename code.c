#include <stdio.h>
#include <stdlib.h>

int main() {

int qty;
long int ISBN;
char title[50];
float price;
float total;
int vat;

printf("Enter your requested quantity:"); scanf("%d", &qty);
printf("Enter the ISBN number:"); scanf("%ld", &ISBN);
printf("Enter the Title:"); scanf("%s", title);
printf("Enter the price:"); scanf("%f", &price);
printf("Enter VAT:"); scanf("%d", &vat);
total = price * qty;

//scanf("%d%d%s%f%f", &qty, &ISBN, &title, &price, &total);
printf("BK Bookseller\n\n");
printf("Qty  ISBN                   Title               Price    Total\n");
printf("______________________________________________________________\n");
printf("%d", qty);
printf("%13ld", ISBN);
printf("%25s", title);
printf("%14.2f", price);
printf("%9.2f\n", total);
printf("VAT: \n");
printf("You pay: %.2f \n", total);
return 0;
}