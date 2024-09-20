#include<stdio.h>


// void ooe();
// int main(){
   
//    ooe();
    
// }

// void ooe(){
//     int a;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//      if(a%2==0){
//         printf("It is even.");
//     }else
//     {
//         printf("It is odd.");
//     }
    
// }



// int addition(int a, int b){
//     int sum;
//     sum = a + b;
//     return sum;
// }

// int main (){
//     int a ,b ,sum ;
//     printf("Enter two numbers");
//     scanf("%d%d", &a, &b);
//     sum= addition(a, b);
//     printf("The sum is %d", sum);
//     return 0;

// }
/*
1. Functions with no parameters and no return type.
2.Functions with paramenters but no return type.
3. Functions with no parameters but with return type.
4. Functions with paramaters and return types.

* Syntax
    int a=10
    return_type function_name(parameter1,....,){
        statement
    }


*/
void add(int,int);
void subtract(int,int);
void multiply(int,int);

int main(){
    char d;
    do
    {
        int a,b,c;
    printf("Choose the following options (1-3)\n1. ADD \n 2.Subtract \n3.Multiply");
    scanf(" %d ",&c);
    if (c<=3 && c>0)
    {
        printf("Enter the first number :");
        scanf(" %d",&a);

        printf("\nEnter the second number :");
        scanf(" %d",&b);

    }
    else{
        printf("Invalid Reponse");
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
    
    printf("If you wish to continue enter Y else N");
    scanf(" %c",&d);   
   
    
    
} while (d == 'Y');
}

void subtract(int a,int b){
    int x;
    x= a-b;
    printf("The subtraction is %d",x);

}
 void add(int a,int b){
    int y;
    y=a+b;
    printf("The addition is %d",y);
 }

void multiply(int a, int b){
    int z;
    z= a*b;
    printf("The multiplication of the entered numbers is %d ",z);
}
