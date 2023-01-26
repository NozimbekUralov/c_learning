#include <stdio.h>

int main(){
    
    int num;
    printf("masofani kiriting \"km\"da: ");
    scanf("%d", &num);
    printf("masofa \"metr\" %dga teng\n",num*1000);
    printf("masofa \"dm\"%dga teng\n",num*100);   
    printf("masofa \"dyum\"%dga teng\n",num*400);
    printf("masofa \"sm\"%dga teng\n",num*100000);

    return 0;

}
