#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
int main()  
{  
    int choice, A, B;  
    float result;   
    do  
    {  
        printf("\n 1 Addition"); 
        printf("\n 2 Subtraction");
        printf("\n 3 Multiplication");
        printf("\n 4 Division");
        printf("\n 5 Square");
        printf("\n 6 Percent");
        printf("\n 7 Exit");
        printf("\n Choose the Operator: ");
        scanf ("%d", &choice);   
    switch (choice)  
    {  
        case 1:  
            // Addition of numbers  
            printf ("Addition");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &A);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &B);  
            int sum(int a, int b)
                {
                    int C;
                    C = a + b;
                     return (C);
                    }
            result = sum(A,B);
            printf (" Addition of A and B is: %.2f", result);  
            break;   
        case 2: 
            // Subtract of numbers  
            printf ("Subtraction");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &A);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &B); 
            int sub(int a, int b)
                {
                    int C;
                    C = a - b;
                     return (C);
                    }
            result = sub(A,B);  
            printf (" Subtraction of A and B is: %.2f", result);  
            break;   
        case 3:  
            // Multiplication of numbers  
            printf ("Multiplication");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &A);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &B);
            int mul(int a, int b) 
                {
                    int C;
                    C = a * b;
                     return (C);
                    }
            result = mul(A,B); 
            printf (" Multiplication of A and B is: %.2f", result);  
            break;  
        case 4:   
            // Division of numbers  
            printf ("Division");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &A);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &B);  
            if (B == 0)  
                {  
                    printf (" \n Divisor can't be zero.");  
                    scanf ("%d", &B);        
                }  
            int div(int a, int b) 
                {
                    int C;
                    C = a/b;
                     return (C);
                    }
            result = div(A,B); 
            printf (" Division of A and B is: %.2f", result);  
            break;  
        case 5:  
            // Square of any number  
            printf ("Square");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &A);  
            int sq(int a)
                {
                    int C;
                    C = a*a;
                     return (C);
                    }
            result = sq(A); 
            printf (" The Square of %d number is: %.2f", A, result);  
            break;   
         
         case 6:
                // Percentage of any number
            printf("Percentage");
            printf("Enter First Number: ");
            scanf (" %d", &A);
            printf("Enter Second Number: ");
            scanf (" %d", &B);
            int per(int a, int b) 
                {
                    float C;
                    float brd;
                    brd=(float)b/100.0;
                    C=brd*a;
                     return (C);
                    }
            result=per(A,B);
            printf("%d percent of %d is : %.2f", B,A,result);
            break;
        case 7: 
               // If done with the Operation
            printf ("Exit");  
            exit(0);   
            break; 
        default:  
            printf("Error");  
            break;                        
    }  
    printf (" \n \n ");  
    } 
    while (choice!=9);  
    return 0;        
}
