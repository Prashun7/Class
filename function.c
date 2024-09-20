#include<stdio.h>
void add(int,int);
void subtract(int,int);
void multiply(int,int);

int main(){
    char d;
    do
    {
        int a,b,c;
    printf("Choose the following options (1-3)\n1.ADD \n2.Subtract \n3.Multiply\n");
    scanf("%d",&c);
    if ( c<=3 && c>0 )
    {
        printf("Enter the first number :");
        scanf("%d",&a);

        printf("Enter the second number :");
        scanf("%d",&b);

    }
    else{
        printf("Invalid Reponse\n");
    }

    switch (c)
    {
    case 1:
        add (a,b);
        break;
    case 2:
        subtract(a,b);
        break;
    case 3:
        multiply(a,b);
        break;
    default:
        break;
    }  
    printf("If you wish to continue enter Y else N :");
    scanf(" %c",&d);       
} while (d == 'Y');
}
void subtract(int a,int b){
    int x;
    x= a-b;
    printf("The subtraction is %d\n",x);
}
 void add(int a,int b){
    int y;
    y=a+b;
    printf("The addition is %d \n",y);
 }
void multiply(int a, int b){
    int z;
    z= a*b;
    printf("The multiplication of the entered numbers is %d \n",z);
}
