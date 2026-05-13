//question 1. Write a program to print the size of int, float, double, char and void data types.
#include<stdio.h>
int main()
{
    printf("%d\n",sizeof(int)); //4
    printf("%d\n",sizeof(float));  //4
    printf("%d\n",sizeof(double));  //8
    printf("%d\n",sizeof(char)); //1
    printf("%d\n",sizeof(void)); //1
    
printf("\n");

//question 2. write a program to print the sum, subtraction and multiplication of two numbers.

     int num1 =2;
     int num2 =100;
     int sum = num1+num2;
     printf("the sum:%d\n",sum);//102
     int sub =num1-num2;
        printf("the sub:%d\n",sub);//-98
        int mul =num1*num2;
        printf("the mul:%d\n",mul);//200
        int div =num1/num2;
        printf("the div:%d\n",div);//0
printf("\n");
//quesstion 3. write an output fot the following code        
//where x =19
//x++ + --x - x++
//--x + x-- - x++ + ++x

int x=19;
int result1 = x++ + --x - x++; //19 + 19 - 19 = 19
int result2 = --x + x-- - x++ + ++x; //18 + 18 - 17 + 19 = 38
        printf("the result1:%d\n",result1);
        printf("the result2:%d\n",result2);

printf("\n");
//question 4. write an output for the using c program
//a.485/10
int num1=485;
int num2=10;
int division = num1/num2;
printf("division:%d\n",division); //48
//b.59632%10
int num3=59632;
int num4=10;
int modulus= num3%num4;
printf("modulus:%d\n",modulus); //2
//c. 77/6
int num5=77;
int num6=6;
int division2 = num5/num6;
printf("division2:%d\n",division2); //12
//d.56%8
int num7=56;
int num8=8;
int modulus2 = num7%num8;
printf("modulus2:%d\n",modulus2); //0

//question 5. write a code to swap two numbers
// num1=10, num2=20
int num1=10;
int num2=20;
int temp;
temp = num1; //temp =10
num1 = num2; // num1 =20
num2 = temp ; // num = 10
printf("swapping:%d\n",num1);//20
printf("swapping:%d\n",num2);//10


        return 0;}
        