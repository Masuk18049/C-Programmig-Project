#include <stdio.h>
#include <stdlib.h>


int main()
{
    system("COLOR 0A");
    FILE* fp;
    printf("\t\t\t\t\tWelcome to My Tabular analysis project!!\n");

    char fnamer[100]="";		//Storing File Path/Name of Image to Display
    printf("\n\nPlease Enter The Name Of The File To Save your Analysis : \n");
    scanf("%s",&fnamer);
    fp=fopen(fnamer,"w");


    // Variable declarations
    int cash_total=0,cash_paid_total=0,cash_received_total=0, accounts_receiveable_due_total=0,accounts_receiveable_received_total=0, accounts_receiveable_total=0,equipement=0, supplies= 0,assets = 0,accounts_payable_paid_total = 0,accounts_payable_on_account_total = 0,accounts_payable_total = 0, notes_payable_paid_total = 0,
        notes_payable_on_account_total = 0, notes_payable_total = 0, liabilites = 0, capital= 0, drawings = 0, revenues= 0, expenses = 0, owner_equity = 0,amount,type, total_transactions, account_a, account_b, account_c, number_of_account, common_stock=0,dividends=0;

    printf("\nPlease enter the total number of transactions:");
    scanf("%d",&total_transactions);                              // Total number of tractions

    for( int i=1; i<=total_transactions; i++)
    {

        printf("\nTransaction number:  %d\n",i);

        printf("\n\nThe list of available accounts are:\n");            // Accounts name
        printf("\n Cash : 1\n");
        printf(" Accounts receivable : 2\n");
        printf(" Equipments : 3\n");
        printf(" Supplies  : 4\n");
        printf(" Accounts payable : 5\n");
        printf(" Notes payable : 6\n");
        printf(" Capital : 7\n");
        printf(" Drawings : 8\n");
        printf(" Revenue: 9\n");
        printf(" Expense : 10\n");
        printf(" Common Stock: 11\n");
        printf(" Dividends : 12\n");


        /* How many accounts does the transactions affects */


        printf("\n Please  select the number of account in transaction:  %d\n",i);
        scanf("%d",&number_of_account);



        if (number_of_account==2)
        {

            printf("Enter two account name by giving corresponding number:");
            scanf("%d %d",&account_a,&account_b);
        }

        else
        {
            printf("Enter three account name by giving corresponding number:");
            scanf("%d %d %d",&account_a,&account_b,&account_c);

        }

        if (account_a==1||account_b==1||account_c==1)
        {

            printf("\nEnter amount of Cash: ");
            scanf("%d",&amount);
            printf("\nCash Paid or Received?\n");
            printf("Cash Paid: 1\n");
            printf("Cash Received: 2\n");
            scanf("%d",&type);
            if(type==1)
            {
                cash_paid_total +=amount;
            }
            else
            {
                cash_received_total +=amount;
            }
        }

        if (account_a==2||account_b==2||account_c==2)
        {
            printf("\nEnter amount for Accounts receivable: ");
            scanf("%d",&amount);
            printf("\n Due or Received?\n");
            printf("Due: 1\n");
            printf("Received: 2\n");
            scanf("%d",&type);
            if(type==1)
            {
                accounts_receiveable_due_total +=amount;
            }
            else
            {
                accounts_receiveable_received_total +=amount;
            }
        }

        if (account_a==3||account_b==3||account_c==3)
        {
            printf("\nEnter amount for Equipments: ");
            scanf("%d",&amount);
            equipement +=amount;

        }

        if (account_a==4||account_b==4||account_c==4)
        {
            printf("\nEnter amount for Supplies: ");
            scanf("%d",&amount);
            supplies +=amount;

        }

        if (account_a==5||account_b==5||account_c==5)
        {
            printf("\nEnter amount for Accounts payable: ");
            scanf("%d",&amount);
            printf("\n Paid or on account?\n");
            printf("Paid: 1\n");
            printf("On account: 2\n");
            scanf("%d",&type);
            if(type==1)
            {
                accounts_payable_paid_total +=amount;
            }
            else
            {

                accounts_payable_on_account_total +=amount;
            }
        }


        if (account_a==6||account_b==6||account_c==6)
        {
            printf("\nEnter amount for Notes payable: ");
            scanf("%d",&amount);
            printf("\n Paid or on account?\n");
            printf("Paid: 1\n");
            printf("On account: 2\n");
            scanf("%d",&type);
            if(type==1)
            {
                notes_payable_paid_total +=amount;
            }
            else
            {

                notes_payable_on_account_total +=amount;
            }
        }

        if (account_a==7||account_b==7||account_c==7)
        {
            printf("\nEnter amount for Capital: ");
            scanf("%d",&amount);
            capital +=amount;

        }
        if (account_a==8||account_b==8||account_c==8)
        {
            printf("\nEnter amount for Drawings: ");
            scanf("%d",&amount);
            drawings +=amount;

        }
        if (account_a==9||account_b==9||account_c==9)
        {
            printf("\nEnter amount for Revenue: ");
            scanf("%d",&amount);
            revenues +=amount;

        }
        if (account_a==10||account_b==10||account_c==10)
        {
            printf("\nEnter amount for Expenses: ");
            scanf("%d",&amount);
            expenses +=amount;

        }
        if (account_a==11||account_b==11||account_c==11)
        {
            printf("\nEnter amount for Common Stock: ");
            scanf("%d",&amount);
            common_stock +=amount;

        }
        if (account_a==12||account_b==12||account_c==12)
        {
            printf("\nEnter amount for Diviends: ");
            scanf("%d",&amount);
            dividends +=amount;

        }
        account_a=0;
        account_b=0;
        account_c=0;

    }
    // Assets calculation
    printf("\nTotal Cash : %d \n",cash_received_total - cash_paid_total);

    fprintf(fp,"\t\t\t\t\t\t\t\t\tTabular Analysis Of Your Transactions");
    fprintf(fp,"\nAssets Calculations:\n");
    fprintf(fp,"\t\tTotal Cash : %d \n",cash_received_total - cash_paid_total);

    printf("Total Account Receivable : %d \n",accounts_receiveable_due_total-accounts_receiveable_received_total);
    fprintf(fp,"\t\tTotal Account Receivable : %d \n",accounts_receiveable_due_total-accounts_receiveable_received_total);

    printf("Total Equipments : %d \n",equipement);
    fprintf(fp,"\t\tTotal Equipments : %d \n",equipement);

    printf("Total Supplies : %d \n",supplies);
    fprintf(fp,"\t\tTotal Supplies : %d \n",supplies);

    assets = cash_received_total - cash_paid_total + equipement + supplies + accounts_receiveable_due_total-accounts_receiveable_received_total;

    printf("\nTotal assets: %d \n",assets);
    fprintf(fp,"\t\t\nTotal assets = %d \n",assets);

    // Liability calculation
    printf("\nTotal Account payable : %d \n",accounts_payable_on_account_total - accounts_payable_paid_total);

    fprintf(fp,"\nLiabilities Calculations:\n");
    fprintf(fp,"\t\tTotal Account payable : %d \n",accounts_payable_on_account_total - accounts_payable_paid_total);

    printf("Total Notes payable : %d \n",notes_payable_on_account_total - notes_payable_paid_total);
    fprintf(fp,"\t\tTotal Notes payable : %d \n",notes_payable_on_account_total - notes_payable_paid_total);

    liabilites = accounts_payable_on_account_total - accounts_payable_paid_total + notes_payable_on_account_total - notes_payable_paid_total;

    printf("\nTotal liabilities: %d\n",liabilites);
    fprintf(fp,"\t\t\nTotal liabilities = %d\n",liabilites);


    // Owner's Equity calculation
    printf("\nTotal Capital: %d\n",capital);

    fprintf(fp,"\nOwner's Equity Calculations:\n");
    fprintf(fp,"\t\tTotal Capital: %d\n",capital);

    printf("Total Drawings: %d\n",drawings);
    fprintf(fp,"\t\tTotal Drawings: %d\n",drawings);

    printf("Total Revenue: %d\n",revenues);
    fprintf(fp,"\t\tTotal Revenue: %d\n",revenues);



    printf("Total Expenses: %d\n",expenses);
    fprintf(fp,"\t\tTotal Expenses: %d\n",expenses);

    printf("Total Common Stock: %d\n",common_stock);
    fprintf(fp,"\t\tTotal Common Stock: %d\n",common_stock);

    printf("Total Dividends: %d\n",dividends);
    fprintf(fp,"\t\tTotal Dividends: %d\n",dividends);

    owner_equity = capital - drawings + revenues - expenses + common_stock - dividends;

    printf("\nOwner's Equity: %d\n",owner_equity);
    fprintf(fp,"\t\t\nOwner's Equity = %d\n",owner_equity);

    printf("\nAssets = %d ",assets );
    fprintf(fp,"\t\t\nAssets = %d ",assets );

    printf("Liabilities + Owner's equity = %d \n",liabilites+owner_equity);
    fprintf(fp,"\t\tLiabilities + Owner's equity = %d \n",liabilites+owner_equity);

    fclose(fp);
    return 0;
}