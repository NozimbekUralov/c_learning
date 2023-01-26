/*26.jan.2023 
  basic calculation for rectangle's area and perimeter.*/

#include <stdio.h>
int main(){
    int a,b;
    printf("To\'rtburchakning asosi va yon uzunligini kiriting:\n");
    scanf("%d %d", &a, &b);
    printf("To\'rtburchakning perimetri \"P\"=%d\n",(a+b)*2);
    printf("To\'rtburchakning yuzi \"S\"=%d", a*b);
    return 0;
}