
#include"esb.h"

//login function
int login()
{
    char username[15];
    char password[15];

    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"sowmya")==0)
    {
        if(strcmp(password,"123")==0)
        {
             printf("t\Welcome.Login Success!\n");
             return 1;
        }
        else
        {
             printf("\nwrong password");
             return 0;
        }
    }
    else
    {
        printf("\nUser doesn't exist");
        return 0;
    }
}

//calculation function

float total_tv;
float total_vcr;
 float total_remote;
float total_lcd;
 float total_tape;
 float subTotal;
float tax;
 float bill_Amount;
 char name[15];
char cname[15];
 int tvQTY;
 int vcrQTY;
 int remoteQTY;
 int lcdQTY;
 int tapeQTY;
 long long int pno;
 double TV_PRICE=110.00;
double VCR_PRICE=80.00;
 double REMOTE_PRICE=9.20;
 double LCD_PRICE = 500.00;
double TAPE_PRICE = 48.00;
double taxRate = 8.25;
time_t t;

int calculation()
{
    printf("\nCashier's Name: \n");
        scanf("%s",name);
        printf("Customer's Name: \n");
        scanf("%s",cname);
        printf("Customer's Phone number: \n");
        scanf("%lld",&pno);
         printf("\n\t*Enter 0 for none");
        printf("\nHow many TVs were sold? \n");
        scanf("%d", &tvQTY);

        printf("How many VCRs were sold? \n");
        scanf("%d", &vcrQTY);

        printf("How many Remote Controllers were sold? \n");
        scanf("%d", &remoteQTY);

        printf("How many LCDs were sold? \n");
        scanf("%d", &lcdQTY);

        printf("How many Tape Recorders were sold? \n");
        scanf("%d", &tapeQTY);

    total_tv = tvQTY * TV_PRICE;
    total_vcr = vcrQTY * VCR_PRICE;
    total_remote = remoteQTY * REMOTE_PRICE;
    total_lcd = lcdQTY * LCD_PRICE;
    total_tape = tapeQTY * TAPE_PRICE;
    subTotal = total_tv + total_vcr + total_remote + total_lcd + total_tape;
    tax = (subTotal * taxRate)/100;
    bill_Amount = subTotal + tax;
}
//void bill
int bill()
{
       time_t t;
       time(&t);
        printf("\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t");
        printf("\n\n\t\t\t\t\tBill Generated. \n\n");
        printf("\n");
        printf("\t\t\t=======================================================\n");
        printf("\t\t\t\t      Electronics Store Bill\n");
        printf("\n\t\t\t\t     %s", ctime(&t));
        printf("\t\t\t=======================================================\n");
        printf("\t\t\tQTY \t Description \t Unit Price Rs\t Total Price Rs\n");
        printf("\t\t\t--- \t ----------- \t ------------- \t --------------\n\n");
        printf("\t\t\t%02d \t TV                  %.2f       %10.2f \n", tvQTY, TV_PRICE, total_tv);
        printf("\t\t\t%02d  \t VCR                  %.2f       %10.2f  \n", vcrQTY, VCR_PRICE, total_vcr);
        printf("\t\t\t%02d   \t Remote CTRLR          %.2f       %10.2f   \n", remoteQTY, REMOTE_PRICE, total_remote);
        printf("\t\t\t%02d    \t LCD                 %.2f       %10.2f    \n", lcdQTY, LCD_PRICE, total_lcd);
        printf("\t\t\t%02d     \t Tape Recorder        %.2f       %10.2f     \n\n", tapeQTY, TAPE_PRICE, total_tape);
        printf("\t\t\t                                           ---------\n\n");
        printf("\t\t\t                           SUBTOTAL       %10.2f   \n", subTotal);
        printf("\t\t\t                           TAX            %10.2f    \n", tax);
        printf("\t\t\t                           Total         %10.2f     \n", bill_Amount);
        printf("\t\t\t                           Customer         %s     \n", cname);

        printf("\t\t\t                           Phone number     %lld   \n", pno);
        printf("\t\t\t                           Cashier          %s     \n", name);
        printf("\t\t\t=======================================================\n\n");
        printf("\t\t\t\t\t\tEnd of bill\n\n");
        return 1;
}
