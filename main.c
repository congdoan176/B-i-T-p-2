#include<stdio.h>
#include<conio.h>

int main(){
    int luaChon;
    while(luaChon !=5){
    printf("\n1. Tinh tong hai so nguyen.\n2. Tinh hieu hai so nguyen.\n3. Tinh tich hai so nguyen."
                   "\n4. Chia hai so nguyen.\n5. The end"
                   "\n--------------\n");
    scanf("%d", &luaChon);
    switch (luaChon) {
        case 1 : {
            int a, b;
            printf("Nhap hai so nguyen:", a, b);
            scanf("%d%d", &a, &b);
            printf("%d+%d=%d", a, b, a + b);
            break;
        }
        case 2 : {
            int a, b;
            printf("Nhap hai so nguyen:");
            scanf("%d%d", &a, &b);
            printf("%d-%d=%d", a, b, a - b);
            break;
        }
        case 3 : {
            int a, b;
            printf("Nhap hai so nguyen:");
            scanf("%d%d", &a, &b);
            printf("%d*%d=%d", a, b, a * b);
            break;
        }
        case 4 : {
            int a, b;
            printf("Nhap hai so nguyen:");
            scanf("%d%d", &a, &b);
            printf("%d/%d=%d", a, b, a / b);
            break;
        }
    }
    }
    return 0;
}