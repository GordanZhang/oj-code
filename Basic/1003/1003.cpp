#include<stdio.h>  
void print (int a);  
int main (void)  
{  
    short int start = 0, *p = &start;  
    int count1 = 0, output = 0, count2 = 0;  
    while ( scanf("%hd",p++) == 1 )  
        count1++;  
    for ( p = &start; count2 <= count1; p++)  
        output += *p;  
    print( output );  
    return 0;  
}  
  
void print (int a)  
{  
    int num = 0;  
    char ch[5];  
    num = a % 10;  
    switch (num)  
    {  
        case 0: ch[5] = "ling";break;  
        case 1: ch[5] = "yi";break;  
        case 2: ch[5] = "er";break;  
        case 3: ch[5] = "san";break;  
        case 4: ch[5] = "si";break;  
        case 5: ch[5] = "wu";break;  
        case 6: ch[5] = "liu";break;  
        case 7: ch[5] = "qi";break;  
        case 8: ch[5] = "ba";break;  
        case 9: ch[5] = "jiu";  
    }  
    if (a > 10)  
        print(a / 10);  
    printf("%s",ch);  
}  

