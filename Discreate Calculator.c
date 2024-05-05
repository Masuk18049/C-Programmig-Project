#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void or_operation(int bit1, int bit2)

{
    printf("\n %d OR %d is : %d \n",bit1,bit2,bit1 | bit2);
}

void and_operation(int bit1, int bit2)

{
    printf("\n %d AND %d is : %d \n",bit1,bit2,bit1 & bit2);
}

void not_operation(int bit1)

{
    printf("\n %d Not is : %d \n",bit1,~bit1);
}

void nor_operation(int bit1, int bit2)

{
    printf("\n %d NOR %d is : %d \n",bit1,bit2,~(bit1 | bit2));
}

void nand_operation(int bit1, int bit2)

{
    printf("\n %d NAND %d is : %d \n",bit1,bit2,~(bit1 & bit2));
}

void xor_operation(int bit1, int bit2)

{
    printf("\n %d XOR %d is : %d \n",bit1,bit2,bit1 ^ bit2);
}

void fibonacii(int num)
{
    int a=0, b=1,i,c;
    printf("%d ",a);
    for (i=2; i<=num; i++)
    {
        c=a+b;
        a=b;
        b=c;
    printf("%d ",c);
    }
}


void prime_check(int num)
{
    int flag = 0;
    if (num == 0 || num == 1)
        flag = 1;
    for(int i=2; i<=num/2; i++)
    {
        if (num%i==0)
        {
            flag=1;
            break;
        }

    }
    if (flag==1)
    {
        printf("\nNot Prime\n");
    }
    else
    {
        printf("\nPrime\n");
    }
}

void prime_series(int num)
{
    int i, j;
    for ( i = 2; i<=num; i++)
    {
        int flag=0;
        for (j = 2; j<i; j++)
        {
            if( i%j ==0)
            {
                flag=1;
                break;
            }


        }
        if (flag==0)
        {
            printf("%d ",i);
        }


    }
}



void hashing_function(int a, int b)
{
    int quotient, hash_value;
    quotient = a / b;
    hash_value = a - ( b * quotient);
    printf("\n Memory Location is : %d \n",hash_value);

}



void mod(int a, int b)
{
    int quotient, remainder;
    quotient = a / b;
    remainder = a - ( b * quotient);
    printf("\n%d Mod %d is : %d \n",a,b,remainder);
}

int factorial(int a)
{
    int fact = 1;
    for (int i =1; i<=a; i++)
    {
        fact = fact*i;

    }
    return fact;
}

void cesar_cipher(char text[], int key)
{
    char ch;
    for (int i = 0; text[i] != '\0'; ++i) {

        ch = text[i];
        // Check for valid characters.
        if (isalnum(ch)) {

            //Lowercase characters.
            if (islower(ch)) {
                ch = (ch - 'a' + key) % 26 + 'a';
            }
            // Uppercase characters.
            if (isupper(ch)) {
                ch = (ch - 'A' + key) % 26 + 'A';
            }

            // Numbers.
            if (isdigit(ch)) {
                ch = (ch - '0' + key) % 10 + '0';
            }
        }
        // Invalid character.
        else {
            printf("Invalid Message");
        }

        // Adding encoded answer.
        text[i] = ch;

    }

    printf("Encrypted message: %s", text);
}

int permutations(int n, int r) {
   int result;
   result = (factorial(n))/factorial(n-r);
   printf("\n%d P %d is: %d",n,r,result);
}

int combinations(int n, int r) {
   int result;
   result = factorial(n)/(factorial(r)*factorial(n-r));
   printf("\n%d C %d is: %d",n,r,result);
}
int main()
{

    system("COLOR 0A");
    int continue_calculation, select_operation, first_bits, second_bits, series_value, check_value;
    char message[100];
    printf("\n\t\t\t\t\tWelcome To Our Discrete Calculator Project!\n");
    continue_calculation = 1;

    printf("\n\nYou Can Perform The Following Operations : \n");


    while ((continue_calculation) !=0)
    {

        printf("\n\n\tBitwise OR operation: 1\n");

        printf("\n\tBitwise AND operation: 2\n");

        printf("\n\tBitwise NOT operation: 3\n");

        printf("\n\tBitwise NOR operation: 4\n");

        printf("\n\tBitwise NAND operation: 5\n");

        printf("\n\tBitwise XOR operation: 6\n");

        printf("\n\tFibonacii : 7\n");

        printf("\n\tPrime : 8\n");

        printf("\n\tGreatest Common Divisor (GCD): 9\n");

        printf("\n\tLeast Common Divisor (LCD): 10\n");

        printf("\n\tHashing function: 11\n");

        printf("\n\tMod: 12\n");

        printf("\n\tPermutations: 13\n");

        printf("\n\tCombination: 14\n");

        printf("\n\tFactorial: 15\n");

        printf("\n\nPlease Select What You Want To Calculate : \n");
        scanf("%d",&select_operation);

        if((select_operation < 1) || (select_operation > 19))
        {
            printf("\n\tPlease Select Operation Number In The Range 1 - 18 : \n");
            scanf("%d",&select_operation);
        }
        else if (select_operation == 1)
        {
            printf("\nYou have Select Bitwise OR Operation\n");
            printf("\nEnter 1st Input Bits: \n");
            scanf("%d",&first_bits);
            printf("\nEnter Second Input Bits: \n");
            scanf("%d",&second_bits);
            or_operation(first_bits,second_bits);

        }
        else if (select_operation == 2)
        {
            printf("\nYou have Select Bitwise AND Operation\n");
            printf("\nEnter 1st Input Bits: \n");
            scanf("%d",&first_bits);
            printf("\nEnter Second Input Bits: \n");
            scanf("%d",&second_bits);
            and_operation(first_bits,second_bits);

        }
        else if (select_operation == 3)
        {
            printf("\nYou have Select Bitwise NOT Operation\n");
            printf("\nEnter Input Bits: \n");
            scanf("%d",&first_bits);
            not_operation(first_bits);

        }
        else if (select_operation == 4)
        {
            printf("\nYou have Select Bitwise NOR Operation\n");
            printf("\nEnter 1st Input Bits: \n");
            scanf("%d",&first_bits);
            printf("\nEnter Second Input Bits: \n");
            scanf("%d",&second_bits);
            nor_operation(first_bits,second_bits);

        }
        else if (select_operation == 5)
        {
            printf("\nYou have Select Bitwise NAND Operation\n");
            printf("\nEnter 1st Input Bits: \n");
            scanf("%d",&first_bits);
            printf("\nEnter Second Input Bits: \n");
            scanf("%d",&second_bits);
            nand_operation(first_bits,second_bits);

        }

        else if (select_operation == 6)
        {
            printf("\nYou have Select Bitwise XOR Operation\n");
            printf("\nEnter 1st Input Bits: \n");
            scanf("%d",&first_bits);
            printf("\nEnter Second Input Bits: \n");
            scanf("%d",&second_bits);
            xor_operation(first_bits,second_bits);

        }


        else if (select_operation == 7)
        {
            printf("\nYou have Select Fibonacii\n");
            printf("\nEnter a number : \n");
            scanf("%d",&series_value);
            fibonacii(series_value);

        }

        else if (select_operation == 8)
        {
            printf("\nYou have Select Prime Operation \n");
            printf("\n\tDo you want to find Series or Check Prime ?\n ");
            printf("\n\t Find Series : 0  Check Prime : 1\n");
            scanf("%d",&check_value);
            printf("\nEnter a number : \n");
            scanf("%d",&series_value);

            if(check_value==0)
            {
                prime_series(series_value);
            }
            else if (check_value==1)
            {
                prime_check(series_value);
            }


        }
        else if (select_operation == 9)
        {
            printf("\nYou have Select GCD \n");
            printf("\nEnter 1st Number: \n");
            scanf("%d",&first_bits);
            printf("\nEnter Second Number: \n");
            scanf("%d",&second_bits);

        }
        else if (select_operation == 10)
        {
            printf("\nYou have Select LCD \n");
            printf("\nEnter 1st Number: \n");
            scanf("%d",&first_bits);
            printf("\nEnter Second Number: \n");
            scanf("%d",&second_bits);

        }



        else if (select_operation == 11)
        {
            printf("\nYou have Select Hashing Function\n");
            printf("\nEnter Hash key: \n");
            scanf("%d",&first_bits);
            printf("\nEnter total available memory location: \n");
            scanf("%d",&second_bits);
            hashing_function(first_bits,second_bits);


        }

        else if (select_operation == 12)
        {
            printf("\nYou have Select Mod Operation\n");
            printf("\nEnter 1st Number: \n");
            scanf("%d",&first_bits);
            printf("\nEnter 2nd Number: \n");
            scanf("%d",&second_bits);
            mod(first_bits,second_bits);

        }
        else if (select_operation == 13)
        {
            printf("\nYou have Select Permutations\n");
            printf("\nEnter 1st Number: \n");
            scanf("%d",&first_bits);
            printf("\nEnter 2nd Number: \n");
            scanf("%d",&second_bits);
            permutations(first_bits, second_bits);

        }

        else if (select_operation == 14)
        {
            printf("\nYou have Select Combinations\n");
            printf("\nEnter 1st Number: \n");
            scanf("%d",&first_bits);
            printf("\nEnter 2nd Number: \n");
            scanf("%d",&second_bits);
            combinations(first_bits, second_bits);

        }
        else if (select_operation == 15)
        {
            printf("\nYou have Select Factorial\n");
            printf("\nEnter any Positive Number: \n");
            scanf("%d",&first_bits);
            printf("\n %d! Factorial is: %d \n",first_bits,factorial(first_bits));

        }

        printf("\nCalculate again ?\n");
        printf("\n\tYes: 1 No: 0 \n");
        scanf("%d",&continue_calculation);
    }
    return 0;
}