#include"esb.h"
int login();
int calculation();
int bill();

int test_main();
int main()
{

    int x;
    printf("\t\tWelcome To Electronics Store Billing System\n");
    printf("\n Please Enter the following details. \n\n");
    x=login();//login function

    if(x==1)
    {
        calculation();//calculation function
        int a;
    for( a=1;a<8;a++) // Change 'a<?' to how many * you want
    {
       Sleep(500);
        printf("...");
      printf("\n\n\t\t\t\t\tBill Generated. \n\n");
      system("PAUSE");
      system("CLS");
        bill();//bill or display function
        //test_main();
      //return 0;

        system("PAUSE");
        system("CLS");
    }
    return 0;
}
test_main();
      return 0;
}

