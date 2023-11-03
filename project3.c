#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    while(1)
    {
        int pick_up,amount;
        main_menu(); // Display the main menu
        printf("\n>>Pick a conversion: ");
        scanf("%d",&pick_up);
        system("cls");// Clear the console screen
        switch(pick_up)
        {
        case 1:
            decimal_print();// Display the decimal conversion sub-menu
            break;
        case 2:
            binary_print();// Display the binary conversion sub-menu
            break;
        case 3:
            Octal_print();// Display the octal conversion sub-menu
            break;
        case 4:
            hexa_print();// Display the hexadecimal conversion sub-menu
            break;
        case 5:
            printf("Any to any\n");
            break;
        case 6:
            student_info();
            break;
        default:
            error_funcation();// Display an error message for invalid input
            break;
        }
        calc_menu(pick_up);// Handle the conversion menu and calculations
        sub_menu();// Display options to return to the main menu or exit
    }
}
void main_menu()
{
    printf("\n");
    printf("\n");
    printf("\t\t\t**************************************************************************************\n");
    printf("\t\t\t\t\t\t  WELCOME TO BASE CONVERSION\n");
    printf("\t\t\t\t\t***************/////////////////****************\t\t\t\t\t\t\t\n");
    printf("\n");
    printf("\t\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t\t*\t\t1.Decimal_Conversion\t\t*\t\t\t\t\t\n");
    printf("\n");
    printf("\t\t\t\t\t*\t\t2.Binary_Conversion\t\t*\t\t\t\t\t\n");
    printf("\n");
    printf("\t\t\t\t\t*\t\t3.Octal_Conversion\t\t*\t\t\t\t\t\n");
    printf("\n");
    printf("\t\t\t\t\t*\t\t4.Hexa_Decimal_Conversion\t*\t\t\t\t\n");
    printf("\n");
    printf("\t\t\t\t\t*\t\t5.Any_To_Any_Conversion\t\t*\t\t\t\t\n");
    printf("\n");
    printf("\t\t\t\t\t*\t\t6.Student_Information\t\t*\t\t\t\t\n");
    printf("\t\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\t\t-------------------------------------------------\n");
    printf("\n");
    printf("\t\t\t\t//=//=//=//=//=//=//=//=//=//=//=//=//=//=//=//=//=//=//=//=//=//=//=//\n");
    printf("\n");
}
void decimal_print()
{
    printf("\n");
    printf("\n");
    printf("\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n");
    printf("\t\t\t\t\t>>>>>>>> 1. Decimal to Binary Conversion.\n");
    printf("\n");
    printf("\t\t\t\t\t>>>>>>>> 2. Decimal to Octal Conversion.\n");
    printf("\n");
    printf("\t\t\t\t\t>>>>>>>> 3. Decimal to Hex-Decimal Conversion.\n");
    printf("\n");
    printf("\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n");
}
void binary_print()
{
    printf("\n");
    printf("\n");
    printf("\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n");
    printf("\t\t\t\t\t>>>>>>>> 1. Binary to Decimal Conversion.\n");
    printf("\n");
    printf("\t\t\t\t\t>>>>>>>> 2. Binary to Octal Conversion.\n");
    printf("\n");
    printf("\t\t\t\t\t>>>>>>>> 3. Binary to Hex-Decimal Conversion.\n");
    printf("\n");
    printf("\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n");
}
void Octal_print()
{
    printf("\n");
    printf("\n");
    printf("\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n");
    printf("\t\t\t\t\t>>>>>>>> 1. Octal to Binary Conversion.\n");
    printf("\n");
    printf("\t\t\t\t\t>>>>>>>> 2. Octal to Decimal Conversion.\n");
    printf("\n");
    printf("\t\t\t\t\t>>>>>>>> 3. Octal to Hex-Decimal Conversion.\n");
    printf("\n");
    printf("\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n");
}
void hexa_print()
{
    printf("\n");
    printf("\n");
    printf("\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n");
    printf("\t\t\t\t\t>>>>>>>> 1. Hexa-Decimal to Binary Conversion.\n");
    printf("\n");
    printf("\t\t\t\t\t>>>>>>>> 2. Hexa-Decimal to Decimal Conversion.\n");
    printf("\n");
    printf("\t\t\t\t\t>>>>>>>> 3. Hexa-Decimal to Octal Conversion.\n");
    printf("\n");
    printf("\t\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n");
}
void decimal_conversion(int choice,int amount)//parameter
{
    int converted_value[101],i;
    if(choice==1)// If the user chose binary conversion
    {
        while (amount!= 0)
        {
            converted_value[i] = amount % 2;// Calculate the binary digits
            amount = amount / 2;// Reduce the decimal number for further conversion
            i++;
        }
        printf("Binary value :");
        for(int j = i - 1; j>=0; j--)
        {
            printf("%d",converted_value[j]);
        }
    }
    else if(choice==2)// If the user chose octal conversion
    {
        printf("Octal value : %o",amount);// Print the octal representation
    }
    else if(choice==3) // If the user chose hexadecimal conversion
    {
        printf("Hexadecimal value : %X",amount);
    }
}
void binary_conversion(int choice,int amount)//parameter
{
    if(choice==1) // If the user chose decimal conversion
    {
        int decimal_number=0,i=0;
        while (amount != 0)
        {
            int remainder = amount % 10; //Digit of the binary number//
            amount /= 10;
            decimal_number += remainder * pow(2, i);// Calculate the decimal equivalent
            i++;
        }
        printf("Decimal value : %d\n",decimal_number);
    }
    else if(choice==2)// If the user chose octal conversion
    {
        int decimal_number=0,i=0;
        while (amount != 0)
        {
            int remainder = amount % 10;
            amount /= 10;
            decimal_number += remainder * pow(2, i);// Calculate the decimal equivalent
            ++i;
        }
        printf("Octal value : %o\n",decimal_number);
    }
    else if(choice==3)//hexa
    {
        int decimal_number=0,i=0;
        while (amount != 0)
        {
            int remainder = amount % 10;
            amount /= 10;
            decimal_number += remainder * pow(2, i);
            ++i;
        }
        printf("Hexa-decimal value : %X\n",decimal_number);
    }
}
void octal_conversion(int choice,char* source_num)
{

    if(choice==1)// If the user chose binary conversion
    {
        int converted_value[100], decimal_number = 0, i = 0;
        long decimalnum = strtol(source_num, NULL, 8);


        while (decimalnum > 0)
        {
            converted_value[i] = decimalnum % 2;
            decimalnum = decimalnum / 2;
            i++;
        }

        printf("Binary value: ");
        for (int k = i - 1; k >= 0; k--)
        {
            printf("%d", converted_value[k]);
        }

    }
    else if(choice==2)// If the user chose decimal conversion
    {
        long decimalnum=strtol(source_num,NULL,8);
        printf("Decimal value : %ld\n",decimalnum);
    }
    else if(choice==3) // If the user chose hexadecimal conversion
    {
        long decimalnum=strtol(source_num,NULL,8);
        printf("Hexa-decimal : %X\n",decimalnum);
    }
}

void hexa_conversion(int choice,int amount)
{
    if(choice==1)
    {
        int converted_value[100],j=0;
        int decimal_number=0,i=0;

        decimal_number=amount;

        while (decimal_number> 0)
        {
            converted_value[j] = decimal_number % 2;
            decimal_number = decimal_number / 2;
            j++;
        }
        printf("Binary value : ");
        for(int k = j - 1; k>=0; k--)
        {
            printf("%d",converted_value[k]);
        }
    }
    else if(choice == 2)
    {
        printf("Decimal value : %d\n",amount);
    }
    else if(choice==3)
    {
        int decimal_number = amount;
        printf("Octal value : %o\n",decimal_number);
    }
}
void sub_menu()
{
    char x;
    printf("\n");
    printf("\n");
    printf("\t\t\t///////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("\n");
    printf("\t\t\t\t\t\t<*>Return to main menu press(m/M)\n");
    printf("\n");
    printf("\t\t\t\t\t\t<*>Do you want to do Decimal menu press (d/D)\n");
    printf("\n");
    printf("\t\t\t\t\t\t<*>Do you want to do Binary menu press (b/B)\n");
    printf("\n");
    printf("\t\t\t\t\t\t<*>Do you want to do Octal menu press (o/O)\n");
    printf("\n");
    printf("\t\t\t\t\t\t<*>Do you want to do Hexadecimal menu press (h/H)\n");
    printf("\n");
    printf("\t\t\t\t\t\t<*>Or do you want to exit press (x/X)\n");
    printf("\n");
    printf("\t\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("\n");
    printf("\t\t\t///////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    scanf(" %c",&x);
    getchar();
    system("cls");
    if(x=='m'||x=='M')
    {
        main();// Return to the main menu
    }
    else if(x=='d'||x=='D')
    {
        decimal_print();// Display the decimal conversion sub-menu
        calc_menu(1);
    }
    else if(x=='b'||x=='B')
    {
        binary_print();// Display the binary conversion sub-menu
        calc_menu(2);
    }
    else if(x=='o'||x=='O')
    {
        Octal_print();// Display the octal conversion sub-menu
        calc_menu(3);
    }
    else if(x=='h'|| x=='H')
    {
        hexa_print(); // Display the hexadecimal conversion sub-menu
        calc_menu(4);
    }
    else if(x=='x'||x=='X')
    {
        printf("\n");
        printf("\t\t\t************************************* Thank you *************************************\n");
        printf("\n\n");
        exit(0); // Exit the program
    }
    else
    {
        error_funcation();
    }
}
void calc_menu(int pick_up)
{
    int choice,amount;
    char source_num[1000];
    int source_base, destination_base;
    char destination_num[1000];
    if(pick_up<=2)
    {

        printf("\n>>Choose conversion: ");
        scanf("%d",&choice);
        system("cls");
        printf("\nEnter amount: ");
        scanf("%d",&amount);//for Binary to Octal
    }
    else if(pick_up==3)//For hexa-decimal
    {
        printf("\n>>Choose conversion: ");
        scanf("%d",&choice);
        system("cls");
        printf("\nEnter amount: ");
        scanf("%s",source_num);
    }
    else if(pick_up==4)//For hexa-decimal
    {
        printf("\n>>Choose conversion: ");
        scanf("%d",&choice);
        system("cls");
        printf("\nEnter amount: ");
        scanf("%x",&amount);
    }
    else if(pick_up==5)
    {
        printf("Enter the source number: ");
        scanf("%s", source_num);

        printf("Enter the source base: ");
        scanf("%d",&source_base);

        printf("Enter the destination base: ");
        scanf("%d", &destination_base);
    }
    switch(pick_up)
    {
    case 1:
        decimal_conversion(choice,amount);
        break;
    case 2:
        binary_conversion(choice,amount);
        break;
    case 3:
        octal_conversion(choice,source_num);
        break;
    case 4:
        hexa_conversion(choice,amount);
        break;
    case 5:
        convertBase(source_num,source_base,destination_num,destination_base);
        break;
    default:
        error_funcation();
        break;
    }

}
void error_funcation()
{
    printf("\t\t\t\t||||||||||||||||||*************INVALIDE INPUT*************||||||||||||||||||\n");
    sub_menu();// Display options to return to the main menu or exit
}
struct student_info
{
    char name[50];
    int a,b,c;

};

void student_info()
{
    struct student_info s1= { "Safayet Abir", 232,15,225 };
    struct student_info s2= { "Ratul De Sarkar", 232,15,210};
    struct student_info s3= { "Tanzina Rhaman", 232,15,296};
    printf("\n\n");
    printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t|\t\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t|\t=-=-=-=-=-=-=-=-=-=-=-=-=\t  =-=-=-=-=-=-=-=-=-=-=-=\t\t|\n");
    printf("\t\t|\t|\t%s\t|\t  |\t%s\t|\t\t|\n",s1.name,s2.name);
    printf("\t\t|\t|\tID:%d-%d-%d\t|\t  |\tID:%d-%d-%d\t|\t\t|\n",s1.a,s1.b,s1.c,s2.a,s1.b,s1.c);
    printf("\t\t|\t=-=-=-=-=-=-=-=-=-=-=-=-=\t  =-=-=-=-=-=-=-=-=-=-=-=\t\t|\n");
    printf("\t\t|\t\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t|\t\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t|\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=\t\t\t\t|\n");
    printf("\t\t|\t\t\t|\t%s\t  |\t\t\t\t|\n\t\t|\t\t\t|\tID:%d-%d-%d\t  |\t\t\t\t|\n",s3.name,s3.a,s1.b,s1.c);
    printf("\t\t|\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=\t\t\t\t|\n");
    printf("\t\t|\t\t\t\t\t\t\t\t\t\t|\n");
    printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char x;
    printf("If do you want to *back press(m/M): ");
    scanf(" %c",&x);
    system("cls");
    if(x=='m'||x=='M')
    {
        main();// Return to the main menu
    }
    else
    {
        error_funcation();
    }
}

void convertBase(const char* source_num, int source_base, char* destination_num, int destination_base)// Function to convert a number from one base to another
{

    long decimalNumber = strtol(source_num, NULL, source_base);

    char result[100];
    int index = 0;

    while (decimalNumber > 0) {
        int remainder = decimalNumber % destination_base;
        result[index++] = (remainder < 10) ? (char)(remainder + '0') : (char)(remainder - 10 + 'A');
        decimalNumber /= destination_base;
    }

    if (index == 0) {
        result[index++] = '0';
    }

    // Print the result in reverse order
    printf("Any to any conversion :");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");

}



