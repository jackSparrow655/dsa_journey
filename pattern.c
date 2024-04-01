#include<stdio.h>
int main(){
    int n;
    printf("enter the rows: ");
    scanf("%d", &n);
    for(int i = 1; i < n+1; i++){
        for(int j = i; j < n; j++){
            printf(" ");
            printf(" ");
        }
        for(int j = 1; j < i+1; j++){
            printf("%d ", j);
        }
        for(int j = 1; j < i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}