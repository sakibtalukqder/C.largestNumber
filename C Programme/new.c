#include <stdio.h>

int main()
{
    int a, b, c, lg;

    printf("Enter Value : ");
    scanf("%d", &a);

    printf("Enter Value : ");
    scanf("%d", &b);

    printf("Enter Value : ");
    scanf("%d", &c);


    if(a>b & a>c){
        lg=a;
        // printf("%d",a);
    }
    else if(b>a & b>c){
        lg=b;
        // printf("%d",b);
    }
    else{
        lg=c;
        // printf("%d",c);
    }

    printf("The Largest value is : %d",lg);
    
    
    return 0;
}