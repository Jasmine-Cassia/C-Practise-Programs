#include<stdio.h>
int main(){
    int n, m, i, flag = 0;
    printf("Enter a number to check prime: \n");
    scanf("%d", &n);
    m = n / 2;
    if (n == 1){
        flag = 1;
        printf("Neither prime not composite");
    }
    for(i = 2; i <= m; i++){
        if(n % i == 0){
            printf("Not a prime");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    printf("Prime");
    return 0;
}
