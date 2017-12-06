#include<stdio.h>
#include<windows.h>
#include<string.h>
void start();
void logo();
void frame();
void main_menu();
void frame_fix();
void view_user();
void admin_menu();
void view_trans();
void delete_user();
void delete_data();
int gotoxy();
void rename_file();
void modify_file();
void create_account();
void edit_details();
void modify_details(int);
void exit_atm();
void admin();
void mini_statement();
void modify_file_user();
void view_details();
void login_check();
void sub_menu();
void balance();
void trans_notify();
void main_menu_fix();
void change_pin();
void cash_deposit();
void cash_withdraw();
void acc_stat();
void sys_time();
void other_services();
void fund_transfer();
void fast_cash();
struct data{
char fname[30];
char lname[30];
char pname[30];
char dob[20];
char email[50];
char tel[15];
char city[20];
char pincode[10];
int amount;
int pin;
char accno[15];
int prev;
int adl;
};
COORD coord={0,0};
int gotoxy(int x, int y)
 {
     coord.X = x;
     coord.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    return 0;
 }
int main()
 {
     system("title ****ICT BANKING SYSTEM****");
     system("mode 120,30");
     start();
     main_menu();
     return 0;
 }
 void start()
{
     int i;
     system("COLOR FC");
     frame();
     Sleep(100);
     logo();
     gotoxy(46 ,15);
     char s[30]={"ICT Banking And ATM Services.."};
     for(i=0;i<30;i++)
     {
         putchar(s[i]);
         Sleep(10);
     }
    gotoxy(94,26);
    printf("Programmers :-");
     gotoxy(97,27);
     printf("Nikhil Malviya");
     gotoxy(97,28);
     printf("Tarang Patel");
        gotoxy(57,19);
     printf("LOADING...");

     for(i=3;i<=115;i++)
     {
            gotoxy(i,21);
            printf("|");
            if(i==40||i==80)
         Sleep(300);
         else
            Sleep(10);
        }
}
void logo()
{
    int i,j,a=5;
    for(i=1;i<=9;i++)
    {
        gotoxy(50,a);
        a++;
        for(j=1;j<=6;j++)
        {
        if(i==1 || i==2 || i==8 || i==9 )
            printf("*");
        else
        if(j==3 || j==4)
            printf("*");
        else
            printf(" ");
        }
        printf(" ");
        for(j=1;j<=6;j++)
        {
        if(i==1||i==2||i==8||i==9)
            printf("*");
        else
        if(j==1 || j==2)
            printf("*");
        else
            printf(" ");
        }
        printf(" ");
        for(j=1;j<=6;j++)
        {
        if(i==1||i==2 )
            printf("*");
        else
        if(j==3||j==4)
            printf("*");
        else
            printf(" ");
        }
    printf("\n");
    Sleep(50);
    }
}
void frame()
{
    int i,j;

    for(i=3,j=115;i<=120,j>=3;i++,j--)
    {
        gotoxy(i,2);
        printf("_");
        Sleep(1);
        gotoxy(i,3);
        printf("*");
        gotoxy(j,24);
        printf("_");
        gotoxy(j,25);
        printf("*");

    }
    gotoxy(90,1);
    sys_time();
}
void main_menu()
{
    int i,c;
    system("cls");
    system("COLOR 2F");
    frame();
    for(i=0;i<=45;i++)
    {
        gotoxy(i,1);
        printf(" ");
        printf("ICT Banking And ATM Services..");
        Sleep(5);
    }
    logo();
    gotoxy(53,15);
    char s[]="Welcome..!!";
    for(i=0;i<11;i++)
    {
        putchar(s[i]);
        Sleep(5);
    }
    gotoxy(46,17);
    char t[]="NEW TO ATM.. CREATE ACCOUNT";
    for(i=0;i<28;i++)
    {
        putchar(t[i]);
        Sleep(5);
    }
    gotoxy(38,19);
    char u[]="ALREADY HAVE A ACCOUNT.. PRESS [P] TO PROCEED.";
    for(i=0;i<=strlen(u);i++)
    {
        putchar(u[i]);
        Sleep(5);
    }
    gotoxy(18,23);
    char v[]="[C] : Create Account    [P] : Proceed To Account    [E] : Exit    [A] : ADMIN LOGIN";
     for(i=0;i<=strlen(v);i++)
    {
        putchar(v[i]);
        Sleep(5);
    }
    gotoxy(58,21);
    printf(" ");
    c=getche();
    if(c=='c'||c=='C')
        create_account();
    else if(c=='p'||c=='P')
         login_check();
    else if(c=='a'||c=='A')
            admin();
    else if (c=='e'||c=='E')
            exit_atm();
    else{
        system("cls");
        frame_fix();
        gotoxy(55,14);
        printf("INVALID INPUT");
        Sleep(2000);
        main_menu_fix();
    }
}
void frame_fix()
{
    int i,j;
    gotoxy(45,1);
    printf("ICT Banking And ATM Services..");

    for(i=3,j=115;i<=120,j>=3;i++,j--)
    {
        gotoxy(i,2);
        printf("_");
        gotoxy(i,3);
        printf("*");
        gotoxy(j,24);
        printf("_");
        gotoxy(j,25);
        printf("*");
    }
    gotoxy(90,1);
    sys_time();
}
void create_account()
{
    int i;
    int tpin;
    FILE *fp,*fp1;
    struct data d,d1;
    system("cls");
    system("COLOR F1");
    frame_fix();
    gotoxy(50,4);
    char a[]="-: APPLICATION FORM :-";
     for(i=0;i<=strlen(a);i++)
    {
        putchar(a[i]);
        Sleep(20);
    }
    gotoxy(5,6);
    printf("First Name      :-\t");
    scanf("%s",d.fname);
    gotoxy(5,9);
    printf("Last Name       :-\t");
    scanf("%s",d.lname);
    gotoxy(5,12);
    printf("Father/Gaurdian :-\t");
    scanf("%s",d.pname);
    gotoxy(35,15);
    printf("(DD/MM/YYYY)");
    gotoxy(5,15);
    printf("Date Of Birth   :-\t");
    scanf("%s",d.dob);
    gotoxy(5,18);
    printf("E-mail          :-\t");
    scanf("%s",d.email);
    gotoxy(5,21);
    printf("Contact No.     :-\t");
    scanf("%s",&d.tel);
    for(i=5;i<=23;i++)
    {
        gotoxy(60,i);
        printf("|");
        Sleep(20);
    }
    gotoxy(65,7);
    printf("City          :-\t");
    scanf("%s",d.city);
    gotoxy(65,10);
    printf("Pincode       :-\t");
    scanf("%s",d.pincode);
    gotoxy(65,13);
    printf("Intial Amount :-\tRS ");
    scanf("%d",&d.amount);
    gotoxy(65,16);
    printf("Create PIN    :-\t");
    scanf("%d",&tpin);
    gotoxy(65,19);
    printf("Confirm PIN   :-\t");
    scanf("%d",&d.pin);
    x:
    gotoxy(55,27);
    printf("SUBMIT");
    char c;
    c=getche();
    if(c!=13)
        goto x;
    fp=fopen("accounts.txt","r");
    while(fscanf(fp,"%s %d %d %s %s\n",d1.accno,&d1.pin,&d1.amount,d1.fname,d1.lname)!=EOF)
    {
        if(strcmp(d1.accno,d.tel)==0)
        {
            system("cls");
            frame_fix();
            gotoxy(50,15);
            printf("ACCOUNT ALREADY EXIETS..");
            Sleep(1500);
            main_menu_fix();
        }
    }
    if(tpin==d.pin)
    {
        system("cls");
        system("COLOR F1");
        frame_fix();
        gotoxy(50,4);
        printf("-: VERIFY YOUR DETAILS :-");
        gotoxy(5,6);
        printf("First Name      :-\t%s",d.fname);
        gotoxy(5,9);
        printf("Last Name       :-\t%s",d.lname);
        gotoxy(5,12);
        printf("Father/Gaurdian :-\t%s",d.pname);
        gotoxy(5,15);
        printf("Date Of Birth   :-\t%s",d.dob);
        gotoxy(5,18);
        printf("E-mail          :-\t%s",d.email);
        gotoxy(5,21);
        printf("Contact No.     :-\t%s",d.tel);
        for(i=5;i<=23;i++)
        {
            gotoxy(60,i);
            printf("|");
            Sleep(20);
        }
        gotoxy(65,7);
        printf("City          :-\t%s",d.city);
        gotoxy(65,10);
        printf("Pincode       :-\t%s",d.pincode);
        gotoxy(65,13);
        printf("Intial Amount :-\tRS %d",d.amount);
        gotoxy(65,16);
        printf("PIN    \t:-\t%d",d.pin);
        y:
        gotoxy(55,27);
        printf("CONFIRM");
        c=getche();
        if(c!=13)
            goto y;
        }
        else
        {
            create_account();
        }
        system("cls");
        frame_fix();
        gotoxy(49,15);
        printf("CREATING YOUR ACCOUNT ");
        gotoxy(55,13);
        printf("LOADING");
        for(i=0;i<3;i++)
        {
            printf(".");
            Sleep(1500);
        }

        system("cls");
        frame_fix();
        gotoxy(44,14);
        printf("YOUR ACCOUNT IS CREATED SUCCESSFULLY");
        Sleep(1500);
        system("cls");
        frame_fix();

        int j,x=8;
        for(i=1;i<=13;i++)
        {
            gotoxy(33,x);
            for(j=1;j<=25;j++)
            {
           if(i==1||i==13)
                printf("[]");
            else if(j==25||j==1)
                printf("[]");
            else
                printf("  ");
            }
            printf("\n");
            x++;
        }
        gotoxy(50,11);
        char b[]="YOUR LOGIN DETAILS ";
         for(i=0;i<=strlen(b);i++)
        {
            putchar(b[i]);
            Sleep(20);
        }
        gotoxy(40,13);
        printf("YOUR ACCOUNT NUMBER IS \t:%s   ",d.tel);
        gotoxy(50,15);
        printf("YOUR PIN \t:%d   ",d.pin);
        gotoxy(45,18);
        printf("PRESS ANY KEY TO CONTINUE...");
        c=getche();
        strcpy(d.accno,d.tel);
        int date;
        int month;
        int year;
        int hour;
        int minute;
        SYSTEMTIME t;		//pre defined in time.h header
 		GetLocalTime(&t);
		date=t.wDay,month=t.wMonth,year=t.wYear,hour=t.wHour,minute=t.wMinute;
        fp=fopen("users.txt","a");
        fprintf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,date,month,year);
        fclose(fp);
        fp1=fopen("accounts.txt","a");
        fprintf(fp1,"%s %d %d %s %s\n",d.accno,d.pin,d.amount,d.fname,d.lname);
        fclose(fp1);
        fp1=fopen("transactions.txt","a");
        d.adl=d.amount;
        d.prev=0;
        fprintf(fp1,"%s %s %d %d %d %d %d %d %d %d\n",d.accno,d.fname,d.prev,d.adl,d.amount,date,month,year,hour,minute);
        fclose(fp1);
        main_menu_fix();
}
void main_menu_fix()
{
    int i,c;
    system("cls");
    system("COLOR 2F");
    frame_fix();
        gotoxy(45,1);
        printf("ICT Banking And ATM Services..");
        gotoxy(53,15);
        printf("WELCOME..!!");
    logo();
    gotoxy(46,17);
    printf("NEW TO ATM.. CREATE ACCOUNT");
    gotoxy(38,19);
    printf("ALREADY HAVE A ACCOUNT.. PRESS [P] TO PROCEED.");
    gotoxy(18,23);
    printf("[C] : Create Account    [P] : Proceed To Account    [E] : Exit    [A] : ADMIN LOGIN");
    gotoxy(58,21);
    printf(" ");
    c=getche();
    if(c=='c'||c=='C')
        create_account();
    else if(c=='p'||c=='P')
        login_check();
    else if(c=='a'||c=='A')
            admin();
    else if (c=='e'||c=='E')
            exit_atm();
    else{
        system("cls");
        frame_fix();
        gotoxy(55,14);
        printf("INVALID INPUT");
        Sleep(2000);
        main_menu_fix();}
}
void login_check()
{
    system("cls");
    char acno[20];
    FILE *a,*fp;
    struct data d;
    system("COLOR 3F");
    frame_fix();
    gotoxy(43,5);
    a=fopen("accounts.txt","rb");
    int i;
    int j,x=8;
        for(i=1;i<=13;i++)
        {
            gotoxy(33,x);
            for(j=1;j<=25;j++)
            {
           if(i==1||i==13)
                printf("[]");
            else if(j==25||j==1)
                printf("[]");
            else
                printf("  ");
            }
            printf("\n");
            x++;
        }
        gotoxy(46,11);
        char b[]="ENTER YOUR LOGIN DETAILS";
         for(i=0;i<=strlen(b);i++)
        {
            putchar(b[i]);
            Sleep(20);
        }
        gotoxy(44,13);
        printf("ENTER YOUR ACCOUNT NUMBER :");
        gotoxy(53,15);
        scanf("%s",acno);
        gotoxy(45,18);
        printf("PRESS ANY KEY TO CONTINUE...");
        char c;
        c=getche();
        while(fscanf(a,"%s %d %d %s %s\n",d.accno,&d.pin,&d.amount,d.fname,d.lname)!=EOF)
        {
            if(strcmp(acno,d.accno)==0)
                break;
        }
        if(strcmp(acno,d.accno)!=0)
        {
            tag:
            system("cls");
            frame_fix();
            gotoxy(48,14);
            printf("INVALID LOGIN CREDENTIALS");
            Sleep(2000);
            main_menu_fix();
        }
        system("cls");
        frame_fix();
        x=8;
            for(i=1;i<=13;i++)
            {
                gotoxy(33,x);
                for(j=1;j<=25;j++)
                {
               if(i==1||i==13)
                    printf("[]");
                else if(j==25||j==1)
                    printf("[]");
                else
                    printf("  ");
                }
                printf("\n");
                x++;
            }
            gotoxy(46,11);
            for(i=0;i<=strlen(b);i++)
            {
                putchar(b[i]);
                Sleep(20);
            }
            gotoxy(50,12);
            printf("HELLO Mr. %s",d.fname);
            gotoxy(50,14);
            printf("ENTER YOUR PIN :");
            gotoxy(56,16);
            int pin;
            scanf("%d",&pin);
            gotoxy(44,18);
            printf("PRESS ANY KEY TO CONTINUE...");
            c=getche();
            if(pin!=d.pin)
                goto tag;
            fp=fopen("active_user.txt","w");
            fprintf(fp,"%s %d %d %s %s",d.accno,d.pin,d.amount,d.fname,d.lname);
            fclose(fp);
            sub_menu();
}
void sub_menu()
{
    system("cls");
    struct data d;
    frame_fix();
    FILE *fp;
    fp=fopen("active_user.txt","r");
    fscanf(fp,"%s %d %d %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
    fclose(fp);
    gotoxy(6,8);
    printf("[1] CASH DEPOSIT");
    gotoxy(6,12);
    printf("[2] FUND TRANSFER");
    gotoxy(6,16);
    printf("[3] PIN CHANGE");
    gotoxy(6,20);
    printf("[4] OTHER SERVICES");
    gotoxy(95,8);
    printf("[5] FAST CASH");
    gotoxy(95,12);
    printf("[6] CASH WITHDRAWL");
    gotoxy(95,16);
    printf("[7] BALANCE ENQUIRY");
    gotoxy(95,20);
    printf("[8] MINI STATMENT");
    gotoxy(50,5);
    char a[]="SELECT YOUR CHOICE";
    int i;
    for(i=0;i<+strlen(a);i++)
    {
        putchar(a[i]);
        Sleep(25);
    }
    gotoxy(45,13);
    char c[]="Welcome Mr. ";
    strcat(c,d.fname);
    strcat(c," ");
    strcat(c,d.lname);
    for(i=0;i<=strlen(c);i++)
    {
        putchar(c[i]);
        Sleep(25);
    }
    gotoxy(59,27);
    short int option;
    scanf("%d",&option);
    switch(option)
    {
    case 1:
            cash_deposit();
            break;
    case 2:
            fund_transfer();
            break;
    case 3:
            change_pin();
            break;
    case 4:
            other_services();
            break;
    case 5:
            fast_cash();
            break;
    case 6:
            cash_withdraw();
            break;
    case 7:
            balance();
            break;
    case 8:
            mini_statement();
            break;
    case 0:
            exit_atm();
    default:
            system("cls");
            frame_fix();
            gotoxy(53,14);
            printf("INVALID OPTION");
            Sleep(1000);
            sub_menu();
    }
}
void balance()
{
    trans_notify();
    system("cls");
    frame_fix();
    FILE *fp;
    struct data d;
    fp=fopen("active_user.txt","r");
    fscanf(fp,"%s %d %d %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
    fclose(fp);
    gotoxy(48,10);
    char a[]="-:BALANCE ENQUERY:-";
    int i;
    for(i=0;i<=strlen(a);i++)
    {
        putchar(a[i]);
        Sleep(30);
    }
    gotoxy(45,13);
    char c[]="Welcome Mr. ";
    strcat(c,d.fname);
    strcat(c," ");
    strcat(c,d.lname);
    for(i=0;i<=strlen(c);i++)
    {
        putchar(c[i]);
        Sleep(25);
    }
    gotoxy(42,16);
    printf("YOUR ACCOUNT BALANCE IS RS %d",d.amount);
    gotoxy(46,22);
    printf("PRESS ENTER : MAIN MENU");
    tag:
    gotoxy(56,19);
    char op=getche();
    if(op!=13)
        goto tag;
    remove("active_user.txt");
    main_menu_fix();
}
void trans_notify()
{
    system("cls");
    frame_fix();
    gotoxy(35,14);
    printf("YOUR TRANSACTION IS BEING PROCESSED PLEASE WAIT..\a\a\a");
    Sleep(2000);
    system("cls");
    frame_fix();
    gotoxy(38,14);
    printf("YOUR TRANSACTION COMPLETED SUCCESSFULLY");
    Sleep(1500);
}
void change_pin()
{
    FILE *fp,*fp1,*fp2;
    system("cls");
    frame_fix();
    struct data d,d1;
    fp=fopen("active_user.txt","r+");
    fscanf(fp,"%s %d %d %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
    fclose(fp);
    int pin1,pin2,i;
    gotoxy(46,5);
    char c[]="Welcome Mr. ";
    strcat(c,d.fname);
    strcat(c," ");
    strcat(c,d.lname);
    for(i=0;i<=strlen(c);i++)
    {
        putchar(c[i]);
        Sleep(25);
    }
    gotoxy(10,9);
    printf("YOUR PIN IS CONFIDENTIAL");
    gotoxy(10,12);
    printf("NOBODY SHOULD SEE THE PIN");
    gotoxy(10,15);
    printf("WHILE YOU ARE ENTERING IT");
    gotoxy(10,18);
    printf("MAKE YOUR PIN MORE SECURE");
    gotoxy(10,21);
    printf("CHANGING IT FREQUENTLY");
    gotoxy(68,9);
    char a[]="-: PIN CHANGE :-";
    for(i=0;i<=strlen(a);i++)
    {
        putchar(a[i]);
        Sleep(20);
    }
    gotoxy(60,12);
    printf("ENTER NEW PIN \t:\t");
    scanf("%d",&pin1);
    gotoxy(60,15);
    printf("CONFIRM PIN \t:\t");
    scanf("%d",&pin2);
    tag:
    gotoxy(73,18);
    printf("CONFIRM");
    char b=getche();
    if(b!=13)
        goto tag;
    if(pin1==pin2)
        goto tag1;
    else
    {
        system("cls");
        frame_fix();
        gotoxy(45,15);
        printf("PIN DO NOT MATCH PLZ.. TRY AFTER SOME TIME");
        Sleep(2000);
        remove("active_user.txt");
        main_menu_fix();
    }
    tag1:
    trans_notify();
    fp1=fopen("temp.txt","w");
    fp2=fopen("accounts.txt","r");
    while(fscanf(fp2,"%s %d %d %s %s\n",d1.accno,&d1.pin,&d1.amount,d1.fname,d1.lname)!=EOF)
    {
        if(strcmp(d1.accno,d.accno)==0)
        {
            d1.pin=pin2;
        }
        fprintf(fp1,"%s %d %d %s %s\n",d1.accno,d1.pin,d1.amount,d1.fname,d1.lname);
    }
    fclose(fp1);
    fclose(fp2);
    modify_file();
    remove("active_user.txt");
    main_menu_fix();
}
void modify_file()
{
    FILE *fp,*fp1;
    struct data d;
    fp=fopen("accounts.txt","w");
    fp1=fopen("temp.txt","r");
    while(fscanf(fp1,"%s %d %d %s %s\n",d.accno,&d.pin,&d.amount,d.fname,d.lname)!=EOF)
    {
        fprintf(fp,"%s %d %d %s %s\n",d.accno,d.pin,d.amount,d.fname,d.lname);
    }
    fclose(fp);
    fclose(fp1);
    remove("temp.txt");
}
void cash_deposit()
{
    system("cls");
    frame_fix();
    FILE *f, *f1,*f2;
    int i;
    struct data d,d1;
    f=fopen("active_user.txt","r");
    fscanf(f,"%s %d %d %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
    fclose(f);
    gotoxy(46,9);
    char c[]="Welcome Mr. ";
    strcat(c,d.fname);
    strcat(c," ");
    strcat(c,d.lname);
    for(i=0;i<=strlen(c);i++)
    {
        putchar(c[i]);
        Sleep(25);
    }
    gotoxy(50,12);
    char e[]="-:CASH DEPOSIT:-";
    for(i=0;i<=strlen(e);i++)
    {
        putchar(e[i]);
        Sleep(25);
    }
    gotoxy(45,15);
    printf("ENTER AMOUNT   :\tRS ");
    int cash;
    scanf("%d",&cash);
    if(cash<100)
        {
            system("cls");
            frame_fix();
            gotoxy(42,13);
            printf("AMOUNT SHOULD BE GREATER THAN RS 100");
            Sleep(1500);
            sub_menu();
        }
    gotoxy(44,18);
    printf("PRESS ANY KEY TO CONTINUE..");
    char ex;
    ex=getche();
    f1=fopen("accounts.txt","r");
    f2=fopen("temp.txt","w");
    d.prev=d.amount;
    d.adl=cash;
    d.amount=d.prev+d.adl;
    while(fscanf(f1,"%s %d %d %s %s\n",d1.accno,&d1.pin,&d1.amount,d1.fname,d1.lname)!=EOF)
    {
        if(strcmp(d.accno,d1.accno)==0)
            d1.amount=d.amount;
        fprintf(f2,"%s %d %d %s %s\n",d1.accno,d1.pin,d1.amount,d1.fname,d1.lname);
    }
    fclose(f1);
    fclose(f2);
    modify_file();
    trans_notify();
    system("cls");
    frame_fix();
    gotoxy(48,9);
    printf("CASH DEPOSITED");
    gotoxy(36,12);
    printf("PREVIOUS BALANCE \t:\t RS %d",d.prev);
    gotoxy(36,15);
    printf("AMOUNT DEPOSITED \t:\t RS %d",d.adl);
    gotoxy(36,18);
    printf("NEW BALANCE \t:\t RS %d",d.amount);
    gotoxy(44,21);
    printf("PRESS ENTER : MAIN MENU");
    ex=getche();
        int date;
        int month;
        int year;
        int hour;
        int minute;
        SYSTEMTIME t;		//pre defined in time.h header
 		GetLocalTime(&t);
		date=t.wDay,month=t.wMonth,year=t.wYear,hour=t.wHour,minute=t.wMinute;
        f1=fopen("transactions.txt","a");
        fprintf(f1,"%s %s %d %d %d %d %d %d %d %d\n",d.accno,d.fname,d.prev,d.adl,d.amount,date,month,year,hour,minute);
        fclose(f1);
    remove("active_user.txt");
    main_menu_fix();
}
void cash_withdraw()
{
    system("cls");
    frame_fix();
    FILE *f, *f1,*f2;
    int i;
    struct data d,d1;
    f=fopen("active_user.txt","r");
    fscanf(f,"%s %d %d %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
    fclose(f);
    gotoxy(46,9);
    char c[]="Welcome Mr. ";
    strcat(c,d.fname);
    strcat(c," ");
    strcat(c,d.lname);
    for(i=0;i<=strlen(c);i++)
    {
        putchar(c[i]);
        Sleep(25);
    }
    gotoxy(50,12);
    char e[]="-:CASH WITHDRAW:-";
    for(i=0;i<=strlen(e);i++)
    {
        putchar(e[i]);
        Sleep(25);
    }
    gotoxy(45,15);
    printf("ENTER AMOUNT   :\tRS ");
    int cash;
    scanf("%d",&cash);
    if(cash<100)
        {
            system("cls");
            frame_fix();
            gotoxy(42,13);
            printf("AMOUNT SHOULD BE GREATER THAN RS 100");
            Sleep(1500);
            sub_menu();
        }
        if(cash>d.amount)
        {
            system("cls");
            frame_fix();
            gotoxy(42,13);
            printf("WITHDRAWN AMOUNT IS GREATER THAN AVAILABLE AMOUNT");
            Sleep(1500);
            sub_menu();
        }
    gotoxy(44,18);
    printf("PRESS ANY KEY TO CONTINUE..");
    char ex;
    ex=getche();
    f1=fopen("accounts.txt","r");
    f2=fopen("temp.txt","w");
    d.prev=d.amount;
    d.adl=cash;
    d.amount=d.prev-d.adl;
    while(fscanf(f1,"%s %d %d %s %s\n",d1.accno,&d1.pin,&d1.amount,d1.fname,d1.lname)!=EOF)
    {
        if(strcmp(d.accno,d1.accno)==0)
            d1.amount=d.amount;
        fprintf(f2,"%s %d %d %s %s\n",d1.accno,d1.pin,d1.amount,d1.fname,d1.lname);
    }
    fclose(f1);
    fclose(f2);
    modify_file();
    trans_notify();
    system("cls");
    frame_fix();
    gotoxy(48,9);
    printf("CASH WITHDRAWNED");
    gotoxy(36,12);
    printf("PREVIOUS BALANCE \t:\t RS %d",d.prev);
    gotoxy(36,15);
    printf("AMOUNT WITHDRAWN \t:\t RS %d",d.adl);
    gotoxy(36,18);
    printf("NEW BALANCE \t:\t RS %d",d.amount);
    gotoxy(44,21);
    printf("PRESS ENTER : MAIN MENU");
    ex=getche();
    remove("active_user.txt");
    int date;
        int month;
        int year;
        int hour;
        int minute;
        SYSTEMTIME t;		//pre defined in time.h header
 		GetLocalTime(&t);
		date=t.wDay,month=t.wMonth,year=t.wYear,hour=t.wHour,minute=t.wMinute;
    f1=fopen("transactions.txt","a");
        fprintf(f1,"%s %s %d %d %d %d %d %d %d %d\n",d.accno,d.fname,d.prev,d.adl,d.amount,date,month,year,hour,minute);
        fclose(f1);
    main_menu_fix();
}
void sys_time()
	{
        SYSTEMTIME t;
        GetLocalTime(&t);
        int d=t.wDayOfWeek;
        char day[10];

        switch(d)
        {
        case 0:
            strcpy(day,"SUN");
            break;
        case 1:
            strcpy(day,"MON");
            break;
        case 2:
            strcpy(day,"TUE");
            break;
        case 3:
            strcpy(day,"WED");
            break;
        case 4:
            strcpy(day,"THUR");
            break;
        case 5:
            strcpy(day,"FRI");
            break;
        case 6:
            strcpy(day,"SAT");
            break;
        default:
            printf("\n");
        }
        int date=t.wDay;
        int month=t.wMonth;
        int year=t.wYear;
        int hour=t.wHour;
        int minute=t.wMinute;
        char suffix[10];
        if(hour>11)
            {
                hour-=12;
                strcpy(suffix,"PM");
            }
        else
            strcpy(suffix,"AM");
        if(hour==0)
            hour=12;
        printf("%s %d/%d/%d %d:%d %s",day,date,month,year,hour,minute,suffix);
	}
void fund_transfer()
{
    system("cls");
    frame_fix();
    FILE *f, *f1,*f2,*f3;
    int i;
    struct data d,d1;
    f=fopen("active_user.txt","r");
    fscanf(f,"%s %d %d %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
    fclose(f);
    gotoxy(46,7);
    char c[]="Welcome Mr. ";
    strcat(c,d.fname);
    strcat(c," ");
    strcat(c,d.lname);
    for(i=0;i<=strlen(c);i++)
    {
        putchar(c[i]);
        Sleep(25);
    }
    gotoxy(50,9);
    char e[]="-:FUND TRANSFER:-";
    for(i=0;i<=strlen(e);i++)
    {
        putchar(e[i]);
        Sleep(25);
    }
    gotoxy(24,12);
    printf("ENTER RECEPIENT\'S ACCOUNT NUMBER\t:\t");
    char racno[15];
    scanf("%s",racno);
    gotoxy(23,15);
    printf("CONFIRM RECEPIENT\'S ACCOUNT NUMBER\t:\t");
    char racnoc[15];
    scanf("%s",racnoc);
    f1=fopen("accounts.txt","r");
    if(strcmp(racno,racnoc)!=0)
        {
            system("cls");
            frame_fix();
            gotoxy(43,13);
            printf("PLEASE ENTER CORRECT ACCOUNT NUMBER");
            Sleep(1500);
            sub_menu();
        }
        i=0;
    while(fscanf(f1,"%s %d %d %s %s\n",d1.accno,&d1.pin,&d1.amount,d1.fname,d1.lname)!=EOF)
    {
        if(strcmp(racnoc,d1.accno)==0)
            i++;
    }
    if(i==0)
    {
        system("cls");
        frame_fix();
        gotoxy(45,13);
        printf("ACCOUNT DOES NOT EXIST");
        Sleep(1500);
        sub_menu();
    }
    fclose(f1);
    gotoxy(37,18);
    printf("ENTER AMOUNT To SEND\t:\tRS ");
    int samt;
    scanf("%d",&samt);
    d.adl=samt;
    d.prev=d.amount;
    d.amount=d.prev-samt;
    gotoxy(62,21);
    printf("SEND");
    char g;
    g=getche();
    int date;
    int month;
    int year;
    int hour;
    int minute;
    SYSTEMTIME t;		//pre defined in time.h header
    GetLocalTime(&t);
    date=t.wDay,month=t.wMonth,year=t.wYear,hour=t.wHour,minute=t.wMinute;
    f1=fopen("accounts.txt","r");
    f2=fopen("temp.txt","w");
    f3=fopen("transactions.txt","a");
    while(fscanf(f1,"%s %d %d %s %s\n",d1.accno,&d1.pin,&d1.amount,d1.fname,d1.lname)!=EOF)
    {
        if(strcmp(racnoc,d1.accno)==0)
            {d1.adl=samt;
            d1.prev=d1.amount;
            d1.amount+=samt;}
        if(d1.amount<samt)
        {
            system("cls");
            frame_fix();
            gotoxy(43,13);
            printf("DO NOT HAVE ENOUGH BALANCE TO SEND");
            Sleep(1500);
            sub_menu();
            break;
        }
        if(strcmp(d1.accno,d.accno)==0)
            {
                d1.adl=samt;
                d1.prev=d1.amount;
                d1.amount-=samt;
            }
        if(strcmp(d.accno,racnoc)==0)
        {
            system("cls");
            frame_fix();
            gotoxy(42,13);
            printf("CANNOT SEND AMOUNT TO THE SAME ACCOUNT");
            Sleep(1500);
            sub_menu();
            break;
        }
        fprintf(f2,"%s %d %d %s %s\n",d1.accno,d1.pin,d1.amount,d1.fname,d1.lname);
        fprintf(f3,"%s %s %d %d %d %d %d %d %d %d\n",d1.accno,d1.fname,d1.prev,d1.adl,d1.amount,date,month,year,hour,minute);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    modify_file();
    trans_notify();
    system("cls");
    frame_fix();
    gotoxy(48,9);
    printf("CASH TRANSFERED");
    gotoxy(36,12);
    printf("PREVIOUS BALANCE \t:\t RS %d",d.prev);
    gotoxy(36,15);
    printf("AMOUNT TRANSFERED \t:\t RS %d",d.adl);
    gotoxy(36,18);
    printf("NEW BALANCE \t:\t RS %d",d.amount);
    gotoxy(44,21);
    printf("PRESS ENTER : MAIN MENU");
    g=getche();
    remove("active_user.txt");
    main_menu_fix();
}
void fast_cash()
{
    system("cls");
    frame_fix();
    FILE *f, *f1,*f2;
    int i;
    struct data d,d1;
    f=fopen("active_user.txt","r");
    fscanf(f,"%s %d %d %s %s",d.accno,&d.pin,&d.amount,d.fname,d.lname);
    fclose(f);
    gotoxy(46,5);
    char c[]="Welcome Mr. ";
    strcat(c,d.fname);
    strcat(c," ");
    strcat(c,d.lname);
    for(i=0;i<=strlen(c);i++)
    {
        putchar(c[i]);
        Sleep(25);
    }
    gotoxy(54,7);
    char e[]="-:FAST CASH:-";
    for(i=0;i<=strlen(e);i++)
    {
        putchar(e[i]);
        Sleep(25);
    }
    gotoxy(6,8);
    printf("[1] RS 100");
    gotoxy(6,12);
    printf("[2] RS 500");
    gotoxy(6,16);
    printf("[3] RS 1000");
    gotoxy(6,20);
    printf("[4] RS 1500");
    gotoxy(95,8);
    printf("[5] RS 2000");
    gotoxy(95,12);
    printf("[6] RS 3000");
    gotoxy(95,16);
    printf("[7] RS 4000");
    gotoxy(95,20);
    printf("[8] RS 5000");
    gotoxy(50,9);
    char a[]="SELECT YOUR CHOICE";
    for(i=0;i<+strlen(a);i++)
    {
        putchar(a[i]);
        Sleep(25);
    }
    gotoxy(59,27);
    short int option;
    scanf("%d",&option);
    switch(option)
    {
    case 1:
            d.adl=100;
            break;
    case 2:
            d.adl=500;
            break;
    case 3:
            d.adl=1000;
            break;
    case 4:
            d.adl=1500;
            break;
    case 5:
            d.adl=2000;
            break;
    case 6:
            d.adl=3000;
            break;
    case 7:
            d.adl=4000;
            break;
    case 8:
            d.adl=5000;
            break;
    default:
            system("cls");
            frame_fix();
            gotoxy(53,14);
            printf("INVALID OPTION");
            Sleep(1000);
            sub_menu();
    }
    f1=fopen("accounts.txt","r");
    f2=fopen("temp.txt","w");
    d.prev=d.amount;
    d.amount=d.prev-d.adl;
    while(fscanf(f1,"%s %d %d %s %s\n",d1.accno,&d1.pin,&d1.amount,d1.fname,d1.lname)!=EOF)
    {
        if(strcmp(d.accno,d1.accno)==0)
            d1.amount=d.amount;
        fprintf(f2,"%s %d %d %s %s\n",d1.accno,d1.pin,d1.amount,d1.fname,d1.lname);
    }
    fclose(f1);
    fclose(f2);
    modify_file();
    trans_notify();
    system("cls");
    frame_fix();
    gotoxy(48,9);
    printf("CASH WITHDRAWNED");
    gotoxy(36,12);
    printf("PREVIOUS BALANCE \t:\t RS %d",d.prev);
    gotoxy(36,15);
    printf("AMOUNT WITHDRAWN \t:\t RS %d",d.adl);
    gotoxy(36,18);
    printf("NEW BALANCE \t:\t RS %d",d.amount);
    gotoxy(44,21);
    printf("PRESS ENTER : MAIN MENU");
    char g=getche();
    remove("active_user.txt");
    int date;
        int month;
        int year;
        int hour;
        int minute;
        SYSTEMTIME t;		//pre defined in time.h header
 		GetLocalTime(&t);
		date=t.wDay,month=t.wMonth,year=t.wYear,hour=t.wHour,minute=t.wMinute;
    f1=fopen("transactions.txt","a");
        fprintf(f1,"%s %s %d %d %d %d %d %d %d %d\n",d.accno,d.fname,d.prev,d.adl,d.amount,date,month,year,hour,minute);
        fclose(f1);
    main_menu_fix();
}
void other_services()
{
    system("cls");
    frame_fix();
    int i;
    FILE *f1;
    struct data d;
    f1=fopen("active_user.txt","r");
    fscanf(f1,"%s %d %d %s %s\n",d.accno,&d.pin,&d.amount,d.fname,d.lname);
    fclose(f1);
    gotoxy(46,6);
    char c[]="Welcome Mr. ";
    strcat(c,d.fname);
    strcat(c," ");
    strcat(c,d.lname);
    for(i=0;i<=strlen(c);i++)
    {
        putchar(c[i]);
        Sleep(25);
    }
    gotoxy(50,9);
    char e[]="-:OTHER SERVICES:-";
    for(i=0;i<=strlen(e);i++)
    {
        putchar(e[i]);
        Sleep(25);
    }
    gotoxy(48,11);
    printf("SELECT YOUR CHOICE:");
    gotoxy(41,13);
    printf("--> [1]\tVIEW YOUR DETAILS");
    gotoxy(41,15);
    printf("--> [2]\tEDIT YOUR DETAILS");
    gotoxy(41,17);
    printf("--> [3]\tACCOUNT STATMENT");
    int op;
    gotoxy(57,20);
    scanf("%d",&op);
    if(op==1)
        view_details();
    else if(op==2)
        edit_details();
    else if(op==3)
        acc_stat();
    else
    {
            system("cls");
            frame_fix();
            gotoxy(50,13);
            printf("INVALID OPTION");
            Sleep(1500);
            other_services();
    }



}
void view_details()
{
    system("cls");
    frame_fix();
    FILE *fp;
    int date,month,year;
    struct data t,d;
    fp=fopen("active_user.txt","r");
    fscanf(fp,"%s %d %d %s %s",t.accno,&t.pin,&t.amount,t.fname,t.lname);
    fclose(fp);
    fp=fopen("users.txt","r");
    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        if(strcmp(t.accno,d.accno)==0)
            break;
    }
    fclose(fp);
    gotoxy(50,4);
        printf("-: VIEW YOUR DETAILS :-");
        gotoxy(5,7);
        printf("First Name      :-\t%s",d.fname);
        gotoxy(5,11);
        printf("Last Name       :-\t%s",d.lname);
        gotoxy(5,15);
        printf("Father/Gaurdian :-\t%s",d.pname);
        gotoxy(5,19);
        printf("Date Of Birth   :-\t%s",d.dob);
        gotoxy(5,23);
        printf("E-mail          :-\t%s",d.email);
       int i;
        for(i=5;i<=23;i++)
        {
            gotoxy(60,i);
            printf("|");
            Sleep(20);
        }
        gotoxy(65,7);
        printf("Contact No.   :-\t%s",d.tel);
        gotoxy(65,11);
        printf("City          :-\t%s",d.city);
        gotoxy(65,15);
        printf("Pincode       :-\t%s",d.pincode);
        gotoxy(65,19);
        printf("Account       :-\t%d/%d/%d",date,month,year);
        gotoxy(65,20);
        printf("Opened On");
        gotoxy(65,23);
        printf("Account No.   :-\t%s",d.accno);
        y:
        gotoxy(48,27);
        printf("PRESS ENTER : MAIN MENU");
        char c;
        c=getche();
        if(c!=13)
            goto y;
        else
        {
            remove("active_user.txt");
            main_menu_fix();
        }

}
void edit_details()
{

    FILE *fp;
    int date,month,year;
    struct data t,d;
    loop:
    fp=fopen("active_user.txt","r");
    fscanf(fp,"%s %d %d %s %s",t.accno,&t.pin,&t.amount,t.fname,t.lname);
    fclose(fp);
    fp=fopen("users.txt","r");
    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        if(strcmp(t.accno,d.accno)==0)
            break;
    }
    fclose(fp);
    system("cls");
    frame_fix();
    gotoxy(50,4);
        printf("-: EDIT YOUR DETAILS :-");
        gotoxy(5,7);
        printf("[1] First Name      :-\t%s",d.fname);
        gotoxy(5,9);
        printf("[2] Last Name       :-\t%s",d.lname);
        gotoxy(5,11);
        printf("[3] Father/Gaurdian :-\t%s",d.pname);
        gotoxy(5,13);
        printf("[4] Date Of Birth   :-\t%s",d.dob);
        gotoxy(5,15);
        printf("[5] E-mail          :-\t%s",d.email);
        gotoxy(5,17);
        printf("[6] Contact No.     :-\t%s",d.tel);
        gotoxy(5,19);
        printf("[7] City            :-\t%s",d.city);
        gotoxy(5,21);
        printf("[8] Pincode         :-\t%s",d.pincode);
        gotoxy(5,23);
        printf("PRESS [0] WHEN EDITING DONE...");
        int i;
        for(i=5;i<=23;i++)
        {
            gotoxy(60,i);
            printf("|");
            Sleep(20);
        }
        gotoxy(48,27);
        printf("SELECT YOUR CHOICE :");
        int op;
        scanf("%d",&op);
        if(op==0)
            goto exit;
        else{
        switch(op)
        {
        case 1:
            modify_details(1);
            break;
        case 2:
            modify_details(2);
            break;
        case 3:
            modify_details(3);
            break;
        case 4:
            modify_details(4);
            break;
        case 5:
            modify_details(5);
            break;
        case 6:
            modify_details(6);
            break;
        case 7:
            modify_details(7);
            break;
        case 8:
            modify_details(8);
            break;
        }
        goto loop;
        }
        exit:
        view_details();

}
void modify_details(int op)
{
    FILE *fp,*fp1;
    struct data t,d;
    int date,month,year;
    fp=fopen("active_user.txt","r");
    fscanf(fp,"%s %d %d %s %s",t.accno,&t.pin,&t.amount,t.fname,t.lname);
    fclose(fp);
    char fname[15],lname[15],pname[15],dob[15],email[20],city[15],tel[15],pincode[10];
    switch(op)
    {
    case 1:
        gotoxy(70,7);
        printf("-:ENTER NEW DETAILS:-");
        gotoxy(65,9);
        printf("Enter First Name   :\t");
        scanf("%s",fname);
        gotoxy(65,12);
        printf("Confirm First Name :\t");
        scanf("%s",fname);
        gotoxy(75,14);
        printf("CONFIRM");
        char c=getche();
        fp=fopen("users.txt","r");
    fp1=fopen("temp1.txt","w");
    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        if(strcmp(t.accno,d.accno)==0)
        {
            strcpy(d.fname,fname);
        }
        fprintf(fp1,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,date,month,year);
    }
    fclose(fp);
    fclose(fp1);
    fp=fopen("accounts.txt","r");
    fp1=fopen("temp.txt","w");
    while(fscanf(fp,"%s %d %d %s %s\n",d.accno,&d.pin,&d.amount,d.fname,d.lname)!=EOF)
    {
        if(strcmp(t.accno,d.accno)==0)
            strcpy(d.fname,fname);
        fprintf(fp1,"%s %d %d %s %s\n",d.accno,d.pin,d.amount,d.fname,d.lname);
    }
    fclose(fp);
    fclose(fp1);
    modify_file();
        break;
    case 2:
        gotoxy(70,7);
        printf("-:ENTER NEW DETAILS:-");
        gotoxy(65,9);
        printf("Enter Last Name   :\t");
        scanf("%s",lname);
        gotoxy(65,12);
        printf("Confirm Last Name :\t");
        scanf("%s",lname);
        gotoxy(75,14);
        printf("CONFIRM");
        c=getche();
        fp=fopen("users.txt","r");
    fp1=fopen("temp1.txt","w");
    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        if(strcmp(t.accno,d.accno)==0)
        {
            strcpy(d.lname,lname);
        }
        fprintf(fp1,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,date,month,year);
    }
    fclose(fp);
    fclose(fp1);
    fp=fopen("accounts.txt","r");
    fp1=fopen("temp.txt","w");
    while(fscanf(fp,"%s %d %d %s %s\n",d.accno,&d.pin,&d.amount,d.fname,d.lname)!=EOF)
    {
        if(strcmp(t.accno,d.accno)==0)
            strcpy(d.lname,lname);
        fprintf(fp1,"%s %d %d %s %s\n",d.accno,d.pin,d.amount,d.fname,d.lname);
    }
    fclose(fp);
    fclose(fp1);
    modify_file();
        break;
    case 3:
        gotoxy(70,7);
        printf("-:ENTER NEW DETAILS:-");
        gotoxy(65,9);
        printf("Enter Father/Gaurdian   :\t");
        scanf("%s",pname);
        gotoxy(65,12);
        printf("Confirm Father/Gaurdian :\t");
        scanf("%s",pname);
        gotoxy(75,14);
        printf("CONFIRM");
        c=getche();
        fp=fopen("users.txt","r");
    fp1=fopen("temp1.txt","w");
    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        if(strcmp(t.accno,d.accno)==0)
        {
            strcpy(d.pname,pname);
        }
        fprintf(fp1,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,date,month,year);
    }
    fclose(fp);
    fclose(fp1);
        break;
    case 4:
        gotoxy(70,7);
        printf("-:ENTER NEW DETAILS:-");
        gotoxy(65,9);
        printf("Enter Date Of Birth   :\t");
        scanf("%s",dob);
        gotoxy(65,12);
        printf("Confirm Date Of Birth :\t");
        scanf("%s",dob);
        gotoxy(75,14);
        printf("CONFIRM");
        c=getche();
        fp=fopen("users.txt","r");
    fp1=fopen("temp1.txt","w");
    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        if(strcmp(t.accno,d.accno)==0)
        {
            strcpy(d.dob,dob);
        }
        fprintf(fp1,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,date,month,year);
    }
    fclose(fp);
    fclose(fp1);
        break;
    case 5:
        gotoxy(70,7);
        printf("-:ENTER NEW DETAILS:-");
        gotoxy(65,9);
        printf("Enter E-mail   :\t");
        scanf("%s",email);
        gotoxy(65,12);
        printf("Confirm E-mail :\t");
        scanf("%s",email);
        gotoxy(75,14);
        printf("CONFIRM");
        c=getche();
        fp=fopen("users.txt","r");
    fp1=fopen("temp1.txt","w");
    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        if(strcmp(t.accno,d.accno)==0)
        {
            strcpy(d.email,email);
        }
        fprintf(fp1,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,date,month,year);
    }
    fclose(fp);
    fclose(fp1);
        break;
    case 6:
        gotoxy(70,7);
        printf("-:ENTER NEW DETAILS:-");
        gotoxy(65,9);
        printf("Enter Contact No.   :\t");
        scanf("%s",tel);
        gotoxy(65,12);
        printf("Confirm Contact No. :\t");
        scanf("%s",tel);
        gotoxy(75,14);
        printf("CONFIRM");
        c=getche();
        fp=fopen("users.txt","r");
    fp1=fopen("temp1.txt","w");
    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        if(strcmp(t.accno,d.accno)==0)
        {
            strcpy(d.tel,tel);
        }
        fprintf(fp1,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,date,month,year);
    }
    fclose(fp);
    fclose(fp1);
        break;
    case 7:
        gotoxy(70,7);
        printf("-:ENTER NEW DETAILS:-");
        gotoxy(65,9);
        printf("Enter City   :\t");
        scanf("%s",city);
        gotoxy(65,12);
        printf("Confirm City :\t");
        scanf("%s",city);
        gotoxy(75,14);
        printf("CONFIRM");
        c=getche();
        fp=fopen("users.txt","r");
    fp1=fopen("temp1.txt","w");
    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        if(strcmp(t.accno,d.accno)==0)
        {
            strcpy(d.city,city);
        }
        fprintf(fp1,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,date,month,year);
    }
    fclose(fp);
    fclose(fp1);
        break;
    case 8:
        gotoxy(70,7);
        printf("-:ENTER NEW DETAILS:-");
        gotoxy(65,9);
        printf("Enter Pincode   :\t");
        scanf("%s",pincode);
        gotoxy(65,12);
        printf("Confirm Pincode :\t");
        scanf("%s",pincode);
        gotoxy(75,14);
        printf("CONFIRM");
        c=getche();
        fp=fopen("users.txt","r");
    fp1=fopen("temp1.txt","w");
    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        if(strcmp(t.accno,d.accno)==0)
        {
            strcpy(d.pincode,pincode);
        }
        fprintf(fp1,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,date,month,year);
    }
    fclose(fp);
    fclose(fp1);
        break;
    }
    modify_file_user();

}
void modify_file_user()
{
    FILE *fp,*fp1;
    struct data d;
    int date,month,year;
    fp=fopen("users.txt","w");
    fp1=fopen("temp1.txt","r");
    while(fscanf(fp1,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        fprintf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,date,month,year);
    }
    fclose(fp);
    fclose(fp1);
    remove("temp1.txt");
}
void acc_stat()
{
    system("cls");
    frame_fix();
    gotoxy(48,4);
    int i;
    char a[]="-:ACCOUNT STATMENT:-";
    for(i=0;i<=strlen(a);i++)
    {
        putchar(a[i]);
        Sleep(25);
    }
    FILE *fp;
    struct data t,d;
    fp=fopen("active_user.txt","r");
    fscanf(fp,"%s %d %d %s %s",t.accno,&t.pin,&t.amount,t.fname,t.lname);
    fclose(fp);
    gotoxy(45,6);
    char c[]="Welcome Mr. ";
    strcat(c,t.fname);
    strcat(c," ");
    strcat(c,t.lname);
    for(i=0;i<=strlen(c);i++)
    {
        putchar(c[i]);
        Sleep(25);
    }
    gotoxy(8,8);
    printf("DATE\t\tTIME\t\tCr/Dr\t\tPREVIOUS AMOUNT\t\t  AMOUNT\t\tFINAL AMOUNT");
    int date,month,year,hour,minute;
    char suffix[10];

    i=10;
    char type[10];
    fp=fopen("transactions.txt","r");
    while(fscanf(fp,"%s %s %d %d %d %d %d %d %d %d\n",d.accno,d.fname,&d.prev,&d.adl,&d.amount,&date,&month,&year,&hour,&minute)!=EOF)
    {
            if(strcmp(t.accno,d.accno)==0)
            {
                if(d.amount>d.prev&&d.prev==0)
                    strcpy(type,"AO");
                else if(d.amount>d.prev&&d.prev!=0)
                    strcpy(type,"Cr");
                 else if(d.amount<d.prev)
                    strcpy(type,"Dr");
                if(hour>11)
                {
                    hour-=12;
                    strcpy(suffix,"PM");
                }
                else
                strcpy(suffix,"AM");
                if(hour==0)
                hour=12;
                gotoxy(5,i);
                printf("%2d/%2d/%4d\t      %2d:%2d %s\t\t %s\t\tRS %8d\t\tRS %8d\t\tRS %8d",date,month,year,hour,minute,suffix,type,d.prev,d.adl,d.amount);
                i+=2;
                if(i>=24)
                    {
                        gotoxy(50,27);
                        printf("GOTO NEXT PAGE");
                        char g=getche();
                        system("cls");
                        frame_fix();
                        gotoxy(48,4);
                        puts(a);
                        gotoxy(8,8);
                        printf("DATE\t\tTIME\t\tCr/Dr\t\tPREVIOUS AMOUNT\t\t  AMOUNT\t\tFINAL AMOUNT");
                        i=10;

                    }

            }

    }
            gotoxy(50,27);
            printf("PRESS ENTER: MAIN MENU");
            char g=getche();
            remove("active_user.txt");
            main_menu_fix();
}
void mini_statement()
{
    system("cls");
    frame_fix();
    gotoxy(51,4);
    int i;
    char a[]="-:MINI STATMENT:-";
    for(i=0;i<=strlen(a);i++)
    {
        putchar(a[i]);
        Sleep(25);
    }
    FILE *fp,*fp1;
    struct data t,d;
    fp=fopen("active_user.txt","r");
    fscanf(fp,"%s %d %d %s %s",t.accno,&t.pin,&t.amount,t.fname,t.lname);
    fclose(fp);
    gotoxy(45,5);
    char c[]="Welcome Mr. ";
    strcat(c,t.fname);
    strcat(c," ");
    strcat(c,t.lname);
    for(i=0;i<=strlen(c);i++)
    {
        putchar(c[i]);
        Sleep(25);
    }
    gotoxy(8,7);
    printf("DATE\t\tTIME\t\tCr/Dr\t\tPREVIOUS AMOUNT\t\t  AMOUNT\t\tFINAL AMOUNT");
    int date,month,year,hour,minute;
    char suffix[10];

    i=9;
    char type[10];
    fp=fopen("transactions.txt","r");
    int srno=0,sr[50];
    i=0;
fp1=fopen("temp.txt","w");
while(fscanf(fp,"%s %s %d %d %d %d %d %d %d %d\n",d.accno,d.fname,&d.prev,&d.adl,&d.amount,&date,&month,&year,&hour,&minute)!=EOF)
{
    srno++;
    fprintf(fp1,"%d %s %s %d %d %d %d %d %d %d %d\n",srno,d.accno,d.fname,d.prev,d.adl,d.amount,date,month,year,hour,minute);
}
int no=0;
fclose(fp1);
fp1=fopen("temp.txt","r");
while(fscanf(fp1,"%d %s %s %d %d %d %d %d %d %d %d\n",&srno,d.accno,d.fname,&d.prev,&d.adl,&d.amount,&date,&month,&year,&hour,&minute)!=EOF)
      {
          if(strcmp(t.accno,d.accno)==0)
        {
            sr[no]=srno;
            no++;
        }
      }
    fclose(fp1);
    fp1=fopen("temp.txt","r");
int n=1,reve=no,count=0;
i=9;
while(fscanf(fp1,"%d %s %s %d %d %d %d %d %d %d %d\n",&srno,d.accno,d.fname,&d.prev,&d.adl,&d.amount,&date,&month,&year,&hour,&minute)!=EOF)
{if(sr[reve-n]==srno){
                    if(count==5)
                        break;
                if(d.amount>d.prev&&d.prev==0)
                    strcpy(type,"AO");
                else if(d.amount>d.prev&&d.prev!=0)
                    strcpy(type,"Cr");
                 else if(d.amount<d.prev)
                    strcpy(type,"Dr");
                if(hour>11)
                {
                    hour-=12;
                    strcpy(suffix,"PM");
                }
                else
                {strcpy(suffix,"AM");}
                if(hour==0)
                    hour=12;
                gotoxy(5,i);
                printf("%2d/%2d/%4d\t      %2d:%2d %s\t\t %s\t\tRS %8d\t\tRS %8d\t\tRS %8d",date,month,year,hour,minute,suffix,type,d.prev,d.adl,d.amount);
                i+=3;
                n++;
                count++;
                if(reve==-1){
                    break;
                }
                rewind(fp1);
            }
}
fclose(fp1);
gotoxy(50,27);
printf("PRESS ENTER : MAIN MENU");
char enter=getche();
remove("temp.txt");
remove("active_user.txt");
main_menu_fix();
}
void exit_atm()
{
    system("cls");
    frame_fix();
    logo();
    gotoxy(46,15);
    printf("-: THANKS FOR USING ATM:-");
     gotoxy(94,20);
     printf("Programmers :-");
     gotoxy(97,21);
     printf("Nikhil Malviya");
     gotoxy(97,22);
     printf("Tarang Patel");
     gotoxy(10,17);
     printf("\0\t\t");
     exit(0);
}
void admin()
{
    system("cls");
    frame_fix();
    gotoxy(43,5);
    int i;
    int j,x=8;
        for(i=1;i<=13;i++)
        {
            gotoxy(33,x);
            for(j=1;j<=25;j++)
            {
           if(i==1||i==13)
                printf("[]");
            else if(j==25||j==1)
                printf("[]");
            else
                printf("  ");
            }
            printf("\n");
            x++;
        }
        gotoxy(50,11);
        char b[]="-: ADMIN LOGIN :-";
         for(i=0;i<=strlen(b);i++)
        {
            putchar(b[i]);
            Sleep(20);
        }
        gotoxy(40,13);
        printf("ENTER USERNAME :    ");
        char username[]="admin";
        char password[]="admin";
        char usname[15],pass[50];
        scanf("%s",usname);
        gotoxy(40,15);
        printf("ENTER PASSWORD :    ");
        scanf("%s",pass);
        gotoxy(45,17);
        printf("PRESS ANY KEY TO CONTINUE...");
        char c;
        c=getche();
        if(strcmp(username,usname)!=0)
        {
            system("cls");
            frame_fix();
            gotoxy(50,14);
            printf("INVALID USERNAME");
            Sleep(1500);
            main_menu_fix();
        }
        if(strcmp(password,pass)!=0)
        {
            system("cls");
            frame_fix();
            gotoxy(50,14);
            printf("INVALID PASSWORD");
            Sleep(1500);
            main_menu_fix();
        }
        admin_menu();
}
void admin_menu()
{
        system("cls");
        frame_fix();
        int i;
        gotoxy(49,7);
        char e[]="-:WELCOME ADMIN:-";
        for(i=0;i<=strlen(e);i++)
        {
            putchar(e[i]);
            Sleep(25);
        }
        gotoxy(48,9);
        printf("SELECT YOUR CHOICE:");
        gotoxy(41,11);
        printf("--> [1]\tVIEW USERS ");
        gotoxy(41,13);
        printf("--> [2]\tVIEW TRANSACTIONS");
        gotoxy(41,15);
        printf("--> [3]\tDELETE USER ");
        gotoxy(41,17);
        printf("--> [4]\tDELETE DATABASE ");
        gotoxy(41,19);
        printf("--> [5]\tMAIN MENU ");
        int op;
        gotoxy(57,21);
        scanf("%d",&op);
        if(op==1)
            view_user();
        else if(op==2)
            view_trans();
        else if(op==3)
            delete_user();
        else if(op==4)
            delete_data();
        else if(op==5)
            main_menu_fix();
        else
        {
                system("cls");
                frame_fix();
                gotoxy(50,13);
                printf("INVALID OPTION");
                Sleep(1500);
                admin_menu();
        }
    }

void view_user()
{
        tag:
        system("cls");
        frame_fix();
        gotoxy(48,9);
        printf("SELECT YOUR CHOICE:");
        gotoxy(41,11);
        printf("--> [1]\tSEARCH BY ACCOUNT NUMBER");
        gotoxy(41,13);
        printf("--> [2]\tVIEW ALL");
        int op;
        gotoxy(57,15);
        scanf("%d",&op);
        if(op==1)
            goto search;
        else if(op==2)
            goto all;
        else
            goto tag;

        all:
        system("cls");
        frame_fix();
        gotoxy(50,5);
        printf("-:ALL USERS:-");
        gotoxy(8,8);
        int i=10;
        printf("ACCOUNT OPENED ON\t\tACCOUNT NO.\t\t PIN\t\tFULL NAME\t\tBALANCE");
        FILE *fp,*fp1;
        struct data d;
        int date,month,year;
        fp1=fopen("users.txt","r");
        fp=fopen("accounts.txt","r");
        while(fscanf(fp,"%s %d %d %s %s\n",d.accno,&d.pin,&d.amount,d.fname,d.lname)!=EOF)
        {
            fscanf(fp1,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year);
            gotoxy(12,i);
            printf("%d/%d/%d\t\t\t%s\t\t%d\t\t%s %s\t\t%d",date,month,year,d.accno,d.pin,d.fname,d.lname,d.amount);
            i+=2;
            if(i>=24)
                    {
                        gotoxy(50,27);
                        printf("GOTO NEXT PAGE");
                        char g=getche();
                        system("cls");
                        frame_fix();
                        gotoxy(8,8);
                        printf("DATE\t\tTIME\t\tCr/Dr\t\tPREVIOUS AMOUNT\t\t  AMOUNT\t\tFINAL AMOUNT");
                        i=10;
                    }
        }
                        gotoxy(50,27);
                        printf("PRESS ENTER : ADMIN MENU");
                        char g=getche();
                        admin_menu();
        search:
            system("cls");
            frame_fix();
            gotoxy(22,14);
            char acno[15];
            printf("ENTER ACCOUNT TO VIEW DETAILS OF THE USER : ");
            scanf("%s",acno);
            system("cls");
            frame_fix();
            struct data d1;
            fp=fopen("users.txt","r");
            while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d1.accno,d1.fname,d1.lname,d1.pname,d1.dob,d1.email,d1.tel,d1.city,d1.pincode,&date,&month,&year)!=EOF)
            {
                if(strcmp(acno,d1.accno)==0)
                {
                    rewind(fp);
                    break;
                }
                if(feof(fp))
                    {
                        gotoxy(50,14);
                        printf("INVALID INPUT");
                        Sleep(2000);
                        admin_menu();}
            }
            fclose(fp);
            gotoxy(53,4);
                printf("-: VIEW DETAILS :-");
                gotoxy(5,7);
                printf("First Name      :-\t%s",d1.fname);
                gotoxy(5,11);
                printf("Last Name       :-\t%s",d1.lname);
                gotoxy(5,15);
                printf("Father/Gaurdian :-\t%s",d1.pname);
                gotoxy(5,19);
                printf("Date Of Birth   :-\t%s",d1.dob);
                gotoxy(5,23);
                printf("E-mail          :-\t%s",d1.email);
                for(i=5;i<=23;i++)
                {
                    gotoxy(60,i);
                    printf("|");
                    Sleep(20);
                }
                gotoxy(65,7);
                printf("Contact No.   :-\t%s",d1.tel);
                gotoxy(65,11);
                printf("City          :-\t%s",d1.city);
                gotoxy(65,15);
                printf("Pincode       :-\t%s",d1.pincode);
                gotoxy(65,19);
                printf("Account       :-\t%d/%d/%d",date,month,year);
                gotoxy(65,20);
                printf("Opened On");
                gotoxy(65,23);
                printf("Account No.   :-\t%s",d1.accno);
                y:
                gotoxy(48,27);
                printf("PRESS ENTER : ADMIN MENU");
                char c;
                c=getche();
                if(c!=13)
                    goto y;
                else
                {
                    admin_menu();
                }
}
void view_trans()
{
    tag:
        system("cls");
        frame_fix();
        gotoxy(48,9);
        printf("SELECT YOUR CHOICE:");
        gotoxy(41,11);
        printf("--> [1]\tSEARCH BY ACCOUNT NUMBER");
        gotoxy(41,13);
        printf("--> [2]\tVIEW ALL");
        int op;
        gotoxy(57,15);
        scanf("%d",&op);
        if(op==1)
            goto search;
        else if(op==2)
            goto all;
        else
            goto tag;

        all:
        system("cls");
        frame_fix();
        gotoxy(46,5);
        printf("-:ALL TRANSACTIONS:-");
        int i=10;
        gotoxy(5,8);
    printf("ACCOUNT NO.\t   DATE\t          TIME\t        Cr/Dr\t  PREVIOUS AMOUNT\tAMOUNT\t        FINAL AMOUNT");
    int date,month,year,hour,minute;
    char suffix[10];

    i=10;
    char type[10];
    FILE *fp;
    struct data d;
    fp=fopen("transactions.txt","r");
    while(fscanf(fp,"%s %s %d %d %d %d %d %d %d %d\n",d.accno,d.fname,&d.prev,&d.adl,&d.amount,&date,&month,&year,&hour,&minute)!=EOF)
    {
                if(d.amount>d.prev&&d.prev==0)
                    strcpy(type,"AO");
                else if(d.amount>d.prev&&d.prev!=0)
                    strcpy(type,"Cr");
                 else if(d.amount<d.prev)
                    strcpy(type,"Dr");
                if(hour>11)
                {
                    hour-=12;
                    strcpy(suffix,"PM");
                }
                else
                strcpy(suffix,"AM");
                if(hour==0)
                hour=12;
                gotoxy(5,i);
                printf("%s\t\t%2d/%2d/%4d\t%2d:%2d %s\t %s\t   RS %8d\t     RS %8d\tRS %8d",d.accno,date,month,year,hour,minute,suffix,type,d.prev,d.adl,d.amount);
                i+=2;
                if(i>=24)
                    {
                        gotoxy(50,27);
                        printf("GOTO NEXT PAGE");
                        char g=getche();
                        system("cls");
                        frame_fix();
                          gotoxy(5,8);
    printf("ACCOUNT NO.\t   DATE\t          TIME\t        Cr/Dr\t  PREVIOUS AMOUNT\tAMOUNT\t        FINAL AMOUNT");
                        i=10;

                    }



    }
            gotoxy(50,27);
            printf("PRESS ENTER: MAIN MENU");
            char g=getche();
            admin_menu();
        search:
            system("cls");
            frame_fix();
            gotoxy(18,14);
            char acno[15];
            printf("ENTER ACCOUNT TO VIEW TRANSACTIONS OF THE USER : ");
            scanf("%s",acno);
            system("cls");
            frame_fix();
            struct data d1;
            fp=fopen("transactions.txt","r");
            gotoxy(46,5);
        printf("-:ALL TRANSACTIONS:-");
            gotoxy(8,8);
                        printf("DATE\t\tTIME\t\tCr/Dr\t\tPREVIOUS AMOUNT\t\t  AMOUNT\t\tFINAL AMOUNT");
                        i=10;
    while(fscanf(fp,"%s %s %d %d %d %d %d %d %d %d\n",d.accno,d.fname,&d.prev,&d.adl,&d.amount,&date,&month,&year,&hour,&minute)!=EOF)
    {
        if(strcmp(acno,d.accno)==0)
        {
            if(d.amount>d.prev&&d.prev==0)
                    strcpy(type,"AO");
                else if(d.amount>d.prev&&d.prev!=0)
                    strcpy(type,"Cr");
                 else if(d.amount<d.prev)
                    strcpy(type,"Dr");
                if(hour>11)
                {
                    hour-=12;
                    strcpy(suffix,"PM");
                }
                else
                strcpy(suffix,"AM");
                if(hour==0)
                hour=12;
                gotoxy(5,i);
                printf("%2d/%2d/%4d\t      %2d:%2d %s\t\t %s\t\tRS %8d\t\tRS %8d\t\tRS %8d",date,month,year,hour,minute,suffix,type,d.prev,d.adl,d.amount);
                i+=2;
                if(i>=24)
                    {
                        gotoxy(50,27);
                        printf("GOTO NEXT PAGE");
                        char g=getche();
                        system("cls");
                        frame_fix();
                        gotoxy(8,8);
                        printf("DATE\t\tTIME\t\tCr/Dr\t\tPREVIOUS AMOUNT\t\t  AMOUNT\t\tFINAL AMOUNT");
                        i=10;

                    }

        }


    }
            gotoxy(50,27);
            printf("PRESS ENTER: MAIN MENU");
            g=getche();
            admin_menu();

}
void delete_user()
{
    system("cls");
    frame_fix();
    gotoxy(50,10);
    printf("-:DELETE USER:-");
    gotoxy(35,13);
    printf("ENTER ACCOUNT NUMBER:-\t");
    char acno[15];
    scanf("%s",acno);
    gotoxy(45,16);
    printf("PRESS ENTER : TO DELETE");
    char a=getche();
    FILE *fp,*fp1;
    struct data d,d1;
    fp=fopen("accounts.txt","r");
    int i=0;
    fp1=fopen("temp.txt","w");
    while(fscanf(fp,"%s %d %d %s %s\n",d.accno,&d.pin,&d.amount,d.fname,d.lname)!=EOF)
    {
        if(strcmp(acno,d.accno)==0)
        {
            i=1;
            continue;
        }
        fprintf(fp1,"%s %d %d %s %s\n",d.accno,d.pin,d.amount,d.fname,d.lname);
    }
    if(i==0)
    {
        system("cls");
        frame_fix();
        gotoxy(43,14);
        printf("ACCOUNT DOES NOT EXIEST");
        Sleep(1500);
        admin_menu();
    }
    fclose(fp);
    fclose(fp1);
    modify_file();
    int date,month,year;
    fp=fopen("users.txt","r");
    fp1=fopen("temp.txt","w");
    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        if(strcmp(acno,d.accno)==0)
        {
            i=1;
            continue;
        }
        fprintf(fp1,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,date,month,year);
    }
    fclose(fp);
    fclose(fp1);
    fp=fopen("users.txt","w");
    fp1=fopen("temp.txt","r");
    while(fscanf(fp1,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,&date,&month,&year)!=EOF)
    {
        fprintf(fp,"%s %s %s %s %s %s %s %s %s %d %d %d\n",d.accno,d.fname,d.lname,d.pname,d.dob,d.email,d.tel,d.city,d.pincode,date,month,year);
    }
    fclose(fp);
    fclose(fp1);
    remove("temp.txt");
    int hour,minute;
    fp=fopen("transactions.txt","r");
    fp1=fopen("temp.txt","w");
    while(fscanf(fp,"%s %s %d %d %d %d %d %d %d %d\n",d.accno,d.fname,&d.prev,&d.adl,&d.amount,&date,&month,&year,&hour,&minute)!=EOF)
    {
        if(strcmp(acno,d.accno)==0)
        {
            continue;
        }
        fprintf(fp1,"%s %s %d %d %d %d %d %d %d %d\n",d.accno,d.fname,d.prev,d.adl,d.amount,date,month,year,hour,minute);
    }
    fclose(fp);
    fclose(fp1);
    fp=fopen("temp.txt","r");
    fp1=fopen("transactions.txt","w");
    while(fscanf(fp,"%s %s %d %d %d %d %d %d %d %d\n",d.accno,d.fname,&d.prev,&d.adl,&d.amount,&date,&month,&year,&hour,&minute)!=EOF)
    {
        fprintf(fp1,"%s %s %d %d %d %d %d %d %d %d\n",d.accno,d.fname,d.prev,d.adl,d.amount,date,month,year,hour,minute);
    }
    fclose(fp);
    fclose(fp1);
    remove("temp.txt");
    system("cls");
    frame_fix();
    gotoxy(50,14);
    printf("PLEASE WAIT....");
    Sleep(2000);
    system("cls");
    frame_fix();
    gotoxy(43,14);
    printf("ACCOUNT DELETED SUCCESSFULLY..");
    Sleep(1500);
    admin_menu();



}
void delete_data()
{
    system("cls");
    frame_fix();
    gotoxy(25,14);
    printf("DO YOU REALLY WANT TO DELETE DATABASE[Y/N] :");
    char a=getche();
    if(a=='y'||a=='Y')
        goto tag;
    else
        admin_menu();
    tag:
    remove("accounts.txt");
    remove("users.txt");
    remove("transactions.txt");
    system("cls");
    frame_fix();
    gotoxy(40,14);
    printf("DATABASE DELETED SUCCESSFULLY...");
    Sleep(1500);
    admin_menu();
}
