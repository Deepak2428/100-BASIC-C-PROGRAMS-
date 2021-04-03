#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>
void calc()
{
    system("cls");
    char ch1;
    do{
    printf("\n\t\t\t BASIC CALCULATOR\n");
    printf(" PRESS 1 FOR ADDITION\n PRESS 2 FOR SUBTRACTION\n PRESS 3 FOR MULTIPLICATION\n PRESS 4 FOR DIVISION\n ");
    char ch;
    ch=getch();
    if(ch=='1')
    {    int a,b,sum=0;
        system("cls");
        printf(" \t\t YOU HAVE CHOSEN ADDITION\n\n");
        printf("   ENTER TWO NUMBERS TO ADD\n\n");
        printf("ENTER FIRST NUMBER: ");
        scanf("%d",&a);
        printf("\n\nENTER SECOND NUMBER: ");
        scanf("%d",&b);
        sum=a+b;
        printf("\n\n THE SUM OF %d AND %d IS : %d ",a,b,sum);
    }
    else if(ch=='2')
    {
        int a,b,sum=0;
        system("cls");
        printf(" \t\t YOU HAVE CHOSEN SUBSTRACTION\n\n");
        printf(" ENTER TWO NUMBERS TO SUBSTRACT\n\n");
        printf("ENER FIRST NUMBER: ");
        scanf("%d",&a);
        printf("\nENER SECOND NUMBER: ");
        scanf("%d",&b);
        sum=a-b;
        printf("\n\n THE SUBSTRACTION OF  %d AND %d IS : %d ",a,b,sum);
    }
    else if(ch=='3')
    {
        int a,b,sum=0;
        system("cls");
        printf(" \t\t YOU HAVE CHOSEN MULTIPLICATION\n\n");
        printf(" ENTER TWO NUMBERS TO MULTIPLY");
        printf("\n\nENER FIRST NUMBER: ");
        scanf("%d",&a);
        printf("\nENER SECOND NUMBER: ");
        scanf("%d",&b);
        sum=a*b;
        printf("\n\n THE MULTIPLICATION OF  %d AND %d IS : %d ",a,b,sum);
    }
    else if(ch=='4')
    {
        int a,b,sum=0;
        system("cls");
        printf(" \t\t YOU HAVE CHOSEN DIVISION\n\n");
        printf(" ENTER TWO NUMBERS TO DIVIDE");
        printf("\n\nENER FIRST NUMBER:");
        scanf("%d",&a);
        printf("\n\nENER SECOND NUMBER: ");
        scanf("%d",&b);
        sum=a/b;
        printf("\n\n THE QUOTIENT OF  %d AND %d IS : %d ",a,b,sum);
    }
    else
    {
        printf(" \n\t\t\tYOU HAVE ENTERED WRONG CHOICE");
    }

printf("\n\n\t\tIF YOU WANT TO USE CALCULATOR AGAIN PRESS Y\n\n");
ch1=getch();
system("cls");
}
while(ch1=='y');

}
void area()
{
     char ch1;
    do{
     system("cls");
    float r;
    printf("\n\n\t\t\tAREA OF A CIRCLE\n\n");
    printf("ENTER THE RADIUS OF CIRCLE (cm): ");
    scanf("%f",&r);
    float ar= (22*r*r)/7;
    float cm=(2*22*r)/7;
    printf("\n\n THE AREA OF CIRCLE IS: %0.2f\n\n THE CIRCUMFERENCE OF CIRCLE IS : %0.2f cm ",ar,cm);
    printf(" \n\n\n\t\t\t IF YOU WANT TO CALCULATE AREA AGAIN PRESS Y\n");
    ch1=getch();
}
while(ch1=='Y'||ch1=='y');
}
void sqcu()
{
    int n;char ch;
    do{
    system("cls");
    printf("\n\n\t\t\t SQUARE & CUBE OF A NUMBER");
    printf("\n\n ENTER A NUMBER : ");
    scanf("%d",&n);
    int sq=n*n;
    int cu=n*n*n;
    printf("\n\nTHE SQUARE OF %d IS: %d\n\nTHE CUBE OF %d IS: %d",n,sq,n,cu );
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');

}
void swap()
{
    int a,b;char ch;
    do
    {
        system("cls");
        printf("\n\n\t\t\tSWAP VALUES OF TWO VARIABLES");
        printf("\n\nENTER VALUE OF a : ");
        scanf("%d",&a);
        printf("\n\nENTER VALUE FOR b : ");
        scanf("%d",&b);
        int temp=b;b=a;a=temp;
        printf("\n\n\t\t\tSWAPPED VALUES\n\n");
        printf("NEW VALUE OF a IS: %d\n\nNEW VALUE OF b IS: %d",a,b);
        printf("\n\n\t\t\tIF YOU WANT TO SWAP VALUES AGAIN PRESS Y");
        ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void marksheet()
{
    char ch;
do{ system("cls");char grade;char str[50];
    float i,j,k;int n,l;
    printf("\n\n\t\t\tAVERAGE\n\n");
    printf("NAME : ");
    fflush(stdin);
    gets(str);
    printf("\n\nENTER MARKS OF PHYSICS : ");
    scanf("%f",&i);
    printf("\n\nENTER MARKS OF CHEMISTRY :");
    scanf("%f",&j);
    printf("\n\nENTER MARKS OF MATHEMATICS :");
    scanf("%f",&k);
    float avg=(i+j+k)/3;
    if(avg>=90)
         grade='A';
    else if(avg>=80&&avg<90)
         grade ='B';
    else if(avg>=65&&avg<80)
         grade='c' ;
    else if(avg>=40&&avg<65)
         grade='D';
    else
         grade='F';
    printf("\n\nTHE AVERAGE OF 3 SUBJECTS IS : %0.2f\n\nGRADE SCORED IS : %C",avg,grade);
    fflush(stdin);
  printf("\n\n\t\t\tIF YOU WANT TO CALCULATE AVERAGE AGAIN PRESS Y");
  ch=getch();
}
while(ch=='y'||ch=='Y');
}
void lcm()
{
    char ch;
    do{system("cls");
   int a,b,max,min,lcm=0;
    printf("\n\n\t\t\t LCM AND HCF\n\n ");
    printf("ENTER FIRST NUMBER : ");
    scanf("%d",&a);
    printf("\n\nENTER SECOND NUMBER : ");
    scanf("%d",&b);
    if(a<b)
    {
        min=a;
        max=b;
    }
    else{
        min=b;
        max=a;
    }
    for(int i=min;i<=max*min;i++)
    {
        if(i%a==0&&i%b==0){
            lcm=i;
            break;}
    }

    int hcf=(a*b)/lcm;
    printf("\n\n\t\t\tLCM OF %d AND %d IS : %d",a,b,lcm);
    printf("\n\n\t\t\tHCF OF %d AND %d IS : %d",a,b,hcf);
    printf("\n\n\t\t\tIF YOU WANT TO FIND LCM AGAIN PRESS Y\n");
    ch=getch();
}
while(ch=='y'||ch=='Y');
}
void maxmin()
{
    int a,b,c;
    int max=0,min=0;
    char ch;
    do{system("cls");
    printf("\n\n\t\t\tMAXIMUM AND MINIMUMU OF 3 NUMBERS\n\n");
    printf("ENTER FIRST NUMBER : ");
    scanf("%d",&a);
    printf("\n\nENTER SECOND NUMBER : ");
    scanf("%d",&b);
    printf("\n\nENTER THIRD NUMBER : ");
    scanf("%d",&c);
    if(a<b&&a<c)
         min =a;
    else if(b<c&&b<a)
         min= b;
    else
         min=c;
    if(a>b&&a>c)
         max=a;
    else if(b>c&&b>a)
         max=b;
    else
         max=c;
    printf("\n\nTHE MAXIMUM OF 3 NUMBERS IS : %d\n\nTHE MINIMUM OF 3 NUMBERS IS : %d\n\n",max,min);
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y");
    ch=getch();
    }
    while(ch=='Y'||ch=='y');

}
void pt()
{
    char ch;
    do{system("cls");
        int a;
        printf("\n\n\t\t\t EVEN & ODD\n\n");
        printf("ENTER THE NUMBER  : ");
        scanf("%d",&a);
        if(a%2==0)
            printf("\n\nTHE ENTERED NUMBER IS EVEN  ");
        else
            printf("\n\nTHE ENTERED NUMBER IS ODD  ");
        printf("\n\n\t\t\t IF YOU WANT TO DO IT AGAIN PRESS Y");
        ch=getch();
    }while(ch=='Y'||ch=='y');
}
void quad()
{
    char ch;
    do{ system("cls");
    int a,b,c;float x1,x2;
    printf("\n\n\t\t\t QUADRATIC EQUATION");
    printf("\n\n ENTER COEFFICIENT OF X SQUARE : ");
    scanf("%d",&a);
    printf("\n\n ENTER COEFFICIENT OF X : ");
    scanf("%d",&b);
    printf("\n\n ENTER VALUE OF CONSTANT TERM : ");
    scanf("%d",&c);
    x1=(-b+pow((b*b-4*a*c),(1/2)))/(2*a);
    x2=(-b-pow((b*b-4*a*c),(1/2)))/(2*a);
    printf("\n\nTHE ROOTS OF QUADRATIC EQUATION ARE %0.2f and %0.2f",x1,x2);
    printf("\n\n\t\t\tIF YOU WANT TO FIND ROOTS AGAIN PRESS Y");
    ch=getch();}
    while(ch=='Y'||ch=='y');
}
void elig()
{
    char ch;
    do{
    system("cls");
    char ch1;
    int a;
    printf("\n\n\t\t\tELIGIBILTY TEST");
    printf("\n\nENTER YOUR GENDER \n\nPRESS M FOR MALE\n\nPRESS F FOR FEMALE\n\n ");
    ch1=getche();
    printf("\n\nENTER YOUR AGE : ");
    scanf("%d",&a);
    if(a>=18)
        printf("\n\nYOU ARE ELIGIBLE FOR VOTING\n\n");
    else
        printf("\nYOU ARE NOT ELIGIBLE FOR VOTING\n\n");
    if((ch1=='m'||ch1=='M')&&a>=21)
        printf(" YOU ARE ELIGIBLE FOR MARRAIGE\n\n");
    else if((ch1=='f'||ch1=='F')&&a>=18)
        printf(" YOU ARE ELIGIBLE FOR MARRAIGE\n\n ");
    else
        printf("\n\nYOU ARE NOT ELIGIBLE FOR MARRAIGE\n\n");
    printf("\n\n\t\t\tIF YOU WANT TO TEST AGAIN PRESS Y");
    ch=getch();
}
while(ch=='y'||ch=='Y');
}
void rev()
{
    char ch;
    do{system("cls");
            int a;int rem,rev=0;
    printf("\n\n\t\t\tREVERSE");
    printf("\n\nENTER A NUMBER : ");
    scanf("%d",&a);
    while(a>0)
    {
         rem=a%10;
         rev=(rev*10)+rem;
         a=a/10;
    }
    printf("\n\nREVERSE OF ENTERED NUMBER IS : %d",rev);
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void sod()
{
    char ch;
    do{  system("cls");
            int a;int rem,rev=0;
    printf("\n\n\t\t\tSUM OF DIGITS");
    printf("\n\nENTER A NUMBER : ");
    scanf("%d",&a);
    while(a>0)
    {
         rem=a%10;
         rev=rev+rem;
         a=a/10;
    }
    printf("\n\nSUM OF DIGITS OF ENTERED NUMBER IS : %d",rev);
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');

}
void palin()
{
    char ch;
    do{system("cls");
            int a,temp;int rem,rev=0;
    printf("\n\n\t\t\tPALINDROME");
    printf("\n\nENTER A NUMBER : ");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
         rem=a%10;
         rev=(rev*10)+rem;
         a=a/10;
    }
    if(temp==rev)
    printf("\n\n ENTERED NUMBER IS PALINDRONE");
    else
    printf("\n\n ENTERED NUMBER IS NOT PALINDRONE");
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void prime()
{
    char ch;
    do{int a;int i,ct=0;
    system("cls");
    printf("\n\n\t\t\tPRIME");
    printf("\n\nENTER A NUMBER : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
         if(a%i==0)
            ct++;
    }
    if(ct==2)
    printf("\n\n ENTERED NUMBER IS PRIME");
    else
        printf("\n\n ENTERED NUMBER IS NOT PRIME");
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void arms()
{
    char ch;
    do{int a;int rem,rev=0,temp;
    printf("\n\n\t\t\tARMSTRONG NUMBER");
    printf("\n\nENTER A NUMBER : ");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
         rem=a%10;
         rev=rev+(rem*rem*rem);
         a=a/10;
    }
    if(temp==rev)
    printf("\n\nENTERED NUMBER IS ARMSTRONG");
    else
        printf("\n\nENTERD NUMBER IS NOT ARMSTRONG");
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void perfect()
{
   char ch;
    do{system("cls");
            int a,i;int rem,rev=0,temp;
    printf("\n\n\t\t\tPERFECT NUMBER");
    printf("\n\nENTER A NUMBER : ");
    scanf("%d",&a);
    temp=a;
    for(i=1;i<a;i++)
    {
         if(a%i==0)
         rev=rev+i;
    }
    if(temp==rev)
    printf("\n\nENTERED NUMBER IS PERFECT NUMBER");
    else
        printf("\n\nENTERD NUMBER IS NOT PERFECT NUMBER");
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void fact()
{
    char ch;
    do{system("cls");
    int a;int rem,rev=1;
    printf("\n\n\t\t\tFACTORIAL");
    printf("\n\nENTER A NUMBER : ");
    scanf("%d",&a);
    for(rem=a;rem>=1;rem--)
    {
         rev=rev*rem;
    }
    printf("\n\nTHE FACTORIAL OF ENTERED NUMBER : %d",rev);
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void soe()
{
    char ch;
    do{system("cls");
    int a;int rem,rev=0,temp=0;
    printf("\n\n\t\t\tSUM OF EVEN & ODD DIGITS");
    printf("\n\nENTER A NUMBER : ");
    scanf("%d",&a);
    while(a>0)
    {
         rem=a%10;
         if(rem%2==0)
          rev=rev+rem;
         else
          temp=temp+rem;
         a=a/10;
    }
    printf("\n\nSUM OF EVEN DIGITS OF ENTERED NUMBER IS : %d\n\nSUM OF ODD DIGITS OF ENTERED NUMBER IS : %d",rev,temp);
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void twin()
{
    char ch;
    do{int a;int i,ct=0,cl=0;char ch2;
    system("cls");
    printf("\n\n\t\t\tTWIN PRIME");
    printf("\n\nENTER A NUMBER : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
         if(a%i==0)
            ct++;
    }
    if(ct==2){
    printf("\n\n ENTERED NUMBER IS PRIME\n\n\t\t\tDO YOU WANT TO FIND TWIN PRIME OF THIS NUMBER.IF YES PRESS Y");
     ch2=getch();
    if(ch2=='y'||ch2=='Y')
    {
        a=a+2;
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
                cl++;
        }
        if(cl==2)
            printf("\n\nTWIN PRIME OF THE NUMBER IS : %d",a);
        else
            printf("\n\nTWIN PRIME OF THE NUMBER DOES NOT EXIST");
    }
    }
    else
        printf("\n\n ENTERED NUMBER IS NOT PRIME");
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void conv1()
{
    char ch;do{system("cls");int n;int b;
    printf("\n\n\t\t\tDECIMAL TO BINARY CONVERSION\n\n");
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    printf("\n\nTHE BINARY EQUIVALENT OF ABOVE NUMBER IS :\t");
    while(n>0)
    {
        b=n%2;
        printf("%d\b\b",b);
        n=n/2;
    }
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void  pa()
{
    char ch;
   do{system("cls");
    int n;
    int i;
       printf("\n\n\t\t\tRead and Print elements of an array:\n");
       printf("\n\nenter size of array : ");
       scanf("%d",&n);int arr[n];
    printf("\n\nInput %d elements in the array : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n\n\t\t\tElements in array are: ");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n\n\t\t\tIF YOU WANT TO REPEAT THE PROCESS PRESS Y");
    ch=getch();
}
while(ch=='Y'||ch=='y');
}
void sa()
{
    char ch;do{ system("cls");
    int i, n, sum=0;
        printf("\n\n\t\t\tSUM OF ALL ELEMENTS IN ARRAY:\n");
       printf("\nENTER NUMBER OF ELEMENTS IN ARRAY : ");
       scanf("%d",&n);
       int a[n];
       printf("\n\nINPUT %d ELEMENTS IN ARRAY : ",n);
       for(i=0;i<n;i++)
        {
	      scanf("%d",&a[i]);
	    }

    for(i=0; i<n; i++)
    {
        sum += a[i];
    }

    printf("\nSUM OF ALL THE ELEMENTS OF ARRAY IS : %d\n\n", sum);
    printf("\n\nIF YOU WANT TO FIND SUM AGAIN PRESS Y ");
    ch=getch();
}
while(ch=='Y'||ch=='y');}
void arev()
{
    char ch; do{ system("cls");
int n;int i;
     printf("\n\n\t\t\tDISPLAY ARRAY IN REVERSE ORDER:\n");
       printf("\nENTER NUMBER OF ELEMENTS : ");
      scanf("%d",&n);
    int a[n];
       printf("\n\nENTER %d NUMBER OF ELEMENTS : ",n);
   for(i=0;i<n;i++)
      {
	  scanf("%d",&a[i]);
	  }


   printf("\n\nARRAY IN REVERSE ORDER IS : ");
   for(i=n-1;i>=0;i--)
      {
	   printf("% 5d",a[i]);
	  }
   printf("\n\n\t\t\tIF YOU WANT TO REPEAT THE PROCESS PRESS Y");
   ch=getch();
}
while(ch=='Y'||ch=='y');
}
void pdtarr()
{
    char ch;do{ system("cls");printf("\n\n\t\t\tPRODUCT OF ARRAY ELEMENT");
     int n;
  printf("\n\nENTER SIZE : ");
     scanf("%d",&n);
  int a[n],i,sum=1;
  printf("\n\nENTER %d ELEMENTS IN ARRAY : ",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
sum*=a[i];
 }
printf("\n\nPRODUCT OF ELEMENTS IN ARRAY IS : %d",sum);
printf("\n\n\t\t\tIF YOU WANT TO REPEAT THE PROCESS PRESS Y");
ch=getch();
}
while(ch=='Y'||ch=='y');}
void largestarr()
{
    char ch;do{ system("cls");
     int n;printf("\n\n\t\t\tLARGEST ELEMENT OF ARRAY");
  printf("\n\n Enter the Size : ");
     scanf("%d",&n);
  int a[n],i,l=0;
  printf("\n\n Enter elements of array : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);

  }l=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]>=l)
    l=a[i];

  }
  printf("\n\n The largest element of array : %d",l);
  printf("\n\n\t\t\tIF U WANT TO REPEAT THE PROCESS PRESS Y");
  ch=getch();
}while(ch=='y'||ch=='Y');
}
void smallestarr()
{
    char ch;do{ system("cls");
    printf("\n\n\t\t\tSMALLEST ELEMENT IN ARRAY");
     int n;
  printf("\n\nEnter the Size : ");
     scanf("%d",&n);
  int a[n],i,s=0;
  printf("\n\nEnter elements of array : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);

  }s=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]<=s)
    s=a[i];

  }
  printf("\n The smallest element of array : %d",s);
  printf("\n\n\t\t\tIF U WANT TO DO THE PROCESS AGAIN PRESS Y");
  ch=getch();
}while(ch=='Y'||ch=='y');}
void evenoddarr()
{
   char ch;
    do{system("cls");
    int n;int i,rev=0,temp=0;
    printf("\n\n\t\t\tNUMBER OF EVEN & ODD NUMBERS IN ARRAY");
    printf("\n\nENTER SIZE OF ARRAY : ");
    scanf("%d",&n);
    int arr[n];
    printf("\n\nENTER %d NUMBERS : ",n);
    for(i=0;i<n;i++)
    {     scanf("%d",&arr[i]);
         if(arr[i]%2==0)
          rev++;
         else
          temp++;
    }
    printf("\n\nNUMBER OF EVEN DIGITS IN ARRAY ARE : %d\n\nNUMBER OF ODD DIGITS IN ARRAY ARE : %d",rev,temp);
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void evenoddsumarr()
{
    char ch;do{ system("cls");
     int n;printf("\n\n\t\t\tSUM OF EVEN AND ODD NUMBERS IN ARRAY");
  printf("\n\nEnter the Size : ");
     scanf("%d",&n);
  int a[n],i,e=0,o=0;
  printf("\n\nEnter elements of array : ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  for(i=0;i<n;i++)
  {
    if(a[i]%2!=0){
      o+=a[i];
    }
    else
    e+=a[i];
  }
  printf("\nThe sum of even terms of given array is : %d \n\nThe sum of odd terms of given array is : %d ",e,o);
  printf("\n\n\t\t\tIF YOU WANT TO DO I AGAIN PRESS Y");
  ch=getch();
}while(ch=='y'||ch=='Y');}
void primearr()
{
  char ch; do{system("cls");int n;printf("\n\n\t\t\tPRIME NUMBERS IN ARRAY");
  printf("\n\nEnter the Size :");
     scanf("%d",&n);
     int a[n];int i,j,temp,ctr=0;
     printf("\n\nenter %d elements : ",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }

     printf("\n\nPrime Numbers in the array are :");
     for(i=0;i<n;i++)
     {
         for(j=1;j<=a[i];j++)
         {

             if(a[i]%j==0)
             {
                 ctr++;
             }
         }
             if(ctr==2)
             {
                 printf("%d ",a[i]);
             }else{}
             ctr=0;
         }
         printf("\n\n\t\t\tIF YOU WANT TO REPEAT THE PROCESS PRESS Y");
         ch=getch();
     }while(ch=='y'||ch=='Y');
}
void palinarr()
{
    char ch;
   do{system("cls");
    int n;
    int i;
       printf("\n\n\t\t\tpalindrone numbers in array:\n");
       printf("\n\nenter size of array : ");
       scanf("%d",&n);
       int *p; int rem,rev=0,temp;
       p=(int*)malloc(sizeof(int)*n);
    printf("\n\nInput %d elements in the array : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n\npalindrone numbers in array are : ");

    for(i=0; i<n; i++)
    {
     temp=*(p+i);
     while(temp>0)
     {
         rem=temp%10;
         rev=(rev*10)+rem;
         temp=temp/10;
     }
     if(rev==*(p+i)){
        printf("%d ",rev);
        rev=0;
    }rev=0;
    }
    printf("\n\n\t\t\tIF YOU WANT TO REPEAT THE PROCESS PRESS Y");
    ch=getch();
}
while(ch=='Y'||ch=='y');
}
void armstarr()
{
    char ch;
    do{system("cls");
        int i;    int a;int *p;int rem,rev=0,temp;
    printf("\n\n\t\t\tARMSTRONG NUMBER IN ARRAY");
    printf("\n\nENTER A SIZE OF ARRAY : ");
    scanf("%d",&a);
    p=(int*)malloc(sizeof(int)*a);
    printf("\n\nENTER %d ELEMENTS IN ARRAY :",a);
    for(i=0;i<a;i++)
        scanf("%d",p+i);
    printf("\n\n ARMSTRONG NUMBERS IN ARE : ");
    for( i=0;i<a;i++){temp=*(p+i);
    while(temp>0)
    {
         rem=temp%10;
         rev=rev+(rem*rem*rem);
         temp=temp/10;
    }
    if(*(p+i)==rev)
    printf("%d ",rev);
    rev=0;
    }
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void perfectarr()
{
    char ch;
    do{system("cls");
    int *p;int a,i;int rem,rev=0,temp;
    printf("\n\n\t\t\tPERFECT NUMBER IN ARRAY");
    printf("\n\nENTER SIZE : ");
    scanf("%d",&a);
    p=(int*)malloc(sizeof(int)*a);
    printf("\n\nENTER %d ELEMNTS IN ARRAY : ",a);
    for(i=0;i<a;i++)
        scanf("%d",(p+i));

    printf("PERFECT NUMBER IN ARRAY ARE : ");
    for(i=0;i<a;i++)
    {   rev=0;
        temp=*(p+i);
        for(rem=1;rem<temp;rem++){
         if(temp%rem==0)
         rev=rev+rem;
    }
    if(temp==rev)
    printf("%d ",temp);
    else{}}
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void search()
{
    char ch;
    do{system("cls");
    int *p;        int a,i;int rem=0,temp;
    printf("\n\n\t\t\tSEARCHING");
    printf("\n\nENTER SIZE OF ARRAY : ");
    scanf("%d",&a);
    p=(int*)malloc(sizeof(int)*a);
        printf("\n\nENTER %d ELEMNTS IN ARRAY : ",a);
    for(i=0;i<a;i++)
    {
       scanf("%d",p+i);
    }
    printf("\n\nENTER ELEMENT TO BE SEARCHED : ");
    scanf("%d",&temp);
    for(i=0;i<a;i++){
        if(*(p+i)==temp)
        {
            rem=1;
            break;
        }
    }
    if(rem==1)
    {
        printf("\n\nELEMENT IS PRESENT IN ARRAY");
    }
    else
        printf("\n\nELEMENT IS NOT PRESENT");

    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void sort()
{
    char ch;
    do{system("cls");
    int *p;int a,i;int j,temp;
    printf("\n\n\t\t\tSORTING ARRAY IN ASCENDING ORDER");
    printf("\n\nENTER SIZE OF ARRAY : ");
    scanf("%d",&a);
    p=(int*)malloc(sizeof(int)*a);
    printf("\n\nENTER %d ELEMENTS IN ARRAY : ",a);
    for(i=0;i<a;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<a-1;i++)
    {
        for(j=i+1;j<a;j++)
            {
                if(*(p+i)>*(p+j))
                {
                    temp=*(p+i);
                    *(p+i)=*(p+j);
                    *(p+j)=temp;
                }
            }
    }
    printf("\n\n SORTED ARRAY IS : ");
    for(i=0;i<a;i++)
        printf("%d ",*(p+i));

    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void leshift()
{
    char ch;
    do{system("cls");
    int *p;int a,i;int j,temp,k;
    printf("\n\n\t\t\tLEFT SHIFT ARRAY K TIMES");
    printf("\n\nENTER SIZE OF ARRAY : ");
    scanf("%d",&a);
    p=(int*)malloc(sizeof(int)*a);
    printf("\n\nENTER %d ELEMENTS IN ARRAY : ",a);
    for(i=0;i<a;i++)
    {
        scanf("%d",p+i);
    }
    printf("\n\nENTER THE NUMBER OF TIMES TO LEFT SHIFT ARRAY : ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        temp=*p;
        for(j=0;j<a;j++)
        {
            *(p+j)=*(p+j+1);
        }
        *(p+j-1)=temp;
    }
    printf("\n\nARRAY AFTER LEFT SHIFTING %d TIMES IS : ",k);
    for(i=0;i<a;i++)
        printf("%d ",*(p+i));
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void rishift()
{
     char ch;
    do{system("cls");
    int *p;int a,i;int j,temp,k;
    printf("\n\n\t\t\tRIGHT SHIFT ARRAY K TIMES");
    printf("\n\nENTER SIZE OF ARRAY : ");
    scanf("%d",&a);
    p=(int*)malloc(sizeof(int)*a);
    printf("\n\nENTER %d ELEMENTS IN ARRAY : ",a);
    for(i=0;i<a;i++)
    {
        scanf("%d",p+i);
    }
    printf("\n\nENTER THE NUMBER OF TIMES TO RIGHT SHIFT ARRAY : ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        temp=*(p+a-1);
        for(j=a-1;j>=0;j--)
        {
            *(p+j)=*(p+j-1);
        }
        *(p+j+1)=temp;
    }
    printf("\n\nARRAY AFTER RIGHT SHIFTING %d TIMES IS : ",k);
    for(i=0;i<a;i++)
        printf("%d ",*(p+i));
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void sort2()
{
    char ch;
    do{system("cls");
    int *p;int a,i;int j,temp;
    printf("\n\n\t\t\tSORTING ARRAY IN DESCENDING ORDER");
    printf("\n\nENTER SIZE OF ARRAY : ");
    scanf("%d",&a);
    p=(int*)malloc(sizeof(int)*a);
    printf("\n\nENTER %d ELEMENTS IN ARRAY : ",a);
    for(i=0;i<a;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<a-1;i++)
    {
        for(j=i+1;j<a;j++)
            {
                if(*(p+i)<*(p+j))
                {
                    temp=*(p+i);
                    *(p+i)=*(p+j);
                    *(p+j)=temp;
                }
            }
    }
    printf("\n\n SORTED ARRAY IS : ");
    for(i=0;i<a;i++)
        printf("%d ",*(p+i));

    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void freq()
{
    char ch;
    do{system("cls");
    int *p;int a,i;int k,j,c=0,f,temp;
    printf("\n\n\t\t\tFREQUENCY OF EACH ELEMENT");
    printf("\n\nENTER SIZE OF ARRAY : ");
    scanf("%d",&a);
    p=(int*)malloc(sizeof(int)*a);
    printf("\n\nENTER %d ELEMENTS IN ARRAY : ",a);
    for(i=0;i<a;i++)
    {
        scanf("%d",p+i);
    }temp=*p;
    for(i=0;i<a;i++)
    {
        if(*(p+i)==temp)
            c++;
    }
    printf("\n\n%d COMES %d TIMES\n",*p,c);
    c=0;
    for(i=1;i<a;i++)
    {
        temp=*(p+i);
        for(j=i-1;j>=0;j--)
        {
            if(*(p+j)==temp){
                f=1;
                break;}

        }
        if(f!=1)
        {
            for(k=i;k<a;k++)
            {
                if(*(p+i)==*(p+k))
                    c++;
            }
            printf("\n\n%d COMES %d TIMES ",*(p+i),c);

        }c=0;f=0;
    }
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void ascii()
{
    char ch;
    do{system("cls");
    char ch1;int a;
    printf("\n\n\t\t\tASCII VALUE OF A CHARACTER");
    printf("\n\nENTER A CHARACTER : " );
    ch1=getche();
    a=ch1;
    printf("\n\nASCII VALUE OF %c IS : %d",ch1,a);
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void conv2()
{
     char ch;do{system("cls");int n;int b;
    printf("\n\n\t\t\tDECIMAL TO OCTAL CONVERSION\n\n");
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    printf("\n\nTHE OCTAL EQUIVALENT OF ABOVE NUMBER IS :\t");
    while(n>0)
    {
        b=n%8;
        printf("%d\b\b",b);
        n=n/8;
    }
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void conv3()
{
     char ch;do{system("cls");int n;int b;
    printf("\n\n\t\t\tDECIMAL TO HEXADECIMAL CONVERSION\n\n");
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    printf("\n\nTHE HEXADECIMAL EQUIVALENT OF ABOVE NUMBER IS :\t\t");
    while(n>0)
    {
        b=n%16;
        if(b==10)
            printf("A\b\b");
        else if(b==11)
            printf("B\b\b");
        else if(b==12)
            printf("C\b\b");
        else if(b==13)
            printf("D\b\b");
        else if(b==14)
            printf("E\b\b");
        else if(b==15)
            printf("F\b\b");
        else
            printf("%d\b\b",b);
        n=n/16;
    }
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void ncr()
{
     char ch;do{system("cls");int i,n;int b,c,p=1,q=1,j=1;float ans;
    printf("\n\n\t\t\tTO FIND nCr OF A NUMBER\n\n");
    printf("\n\nENTER VALUE OF N : ");
    scanf("%d",&n);
    printf("\n\nENTER VALUE OF R : ");
    scanf("%d",&b);
    c=n-b;
    for(i=n;i>=1;i--)
        p*=i;
    for(i=b;i>=1;i--)
        q*=i;
    for(i=c;i>=1;i--)
        j*=i;
    ans=p/(q*j);
    printf("\n\nTHE ANSWER IS : %0.2f",ans);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void nod()
{
    char ch;do{system("cls");int n,m,c=0;
    printf("\n\n\t\t\tNUMBER OF DIGITS IN A NUMBER\n\n");
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    while(n>0)
    {
        c++;
        n=n/10;
    }
     printf("\n\nNUMBER OF DIGITS IN A NUMBER ARE : %d",c);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void mn()
{
    char ch;do{system("cls");int a,b,c,mid;
    printf("\n\n\t\t\tMIDDLE NUMBER OF THREE\n\n");
    printf("ENTER 1ST NUMBER : ");
    scanf("%d",&a);
    printf("ENTER 2ND NUMBER : ");
    scanf("%d",&b);
    printf("ENTER 3RD NUMBER : ");
    scanf("%d",&c);
    if((a<c&&a>b)||(a>c&&a<b))
        mid=a;
    else if((b<a&&b>c)||(b>a&&b<c))
        mid=b;
    else
        mid=c;
        printf("\n\nMIDDLE NUMBER IS : %d",mid);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void vow()
{
     char ch;do{system("cls");char ch1;
    printf("\n\n\t\t\tVOWEL OR CONSONANT\n\n");
    printf("ENTER AN ALPHABET : ");
    ch1=getche();

        if(ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u'||ch1=='A'||ch1=='E'||ch1=='I'||ch1=='O'||ch1=='U')
            printf("\n\nENTERED CHARACTER IS A VOWEL");
        else
            printf("\n\nENTERED CHARACTER IS NOT A VOWEL");
    fflush(stdin);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void string1()
{
    char ch;do{system("cls");char str[50];int i;
    printf("\n\n\t\t\tLENGTH OF STRING\n\n");
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(str);
    for( i=0;str[i]!=NULL;i++);
    printf("\n\nTHE LENGTH OF STRING IS : %d",i);
    fflush(stdin);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void string2()
{
    char ch;do{system("cls");char str[50];int count=0,i,j;
    printf("\n\n\t\t\tLENGTH OF STRING EXCLUDING SPACE\n\n");
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(str);
    for(i=0;str[i]!=NULL;i++);
    for(j=0;j<i;j++)
    {
        if(str[j]==' ')
            count++;
    }
    printf("\n\nTHE LENGTH OF STRING EXCLUDING SPACE IS : %d",(i-count));
    fflush(stdin);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void string3()
{
    char ch;do{system("cls");char str[50];int count=0,i;
    printf("\n\n\t\t\tVOWELS IN A STRING\n\n");
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(str);
    printf("\n\nVOWELS IN STRING ARE: ");
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            printf("%c,",str[i]);
    }
     fflush(stdin);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void upcas()
{
    char ch;do{system("cls");char str[50];int count=0,i,a=0;
    printf("\n\n\t\t\tUPPERCASE LETTERS IN A STRING\n\n");
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(str);
    for(i=0;str[i]!=NULL;i++)
    {
        count=str[i];
        if(count>=65&&count<=90)
            a++;
    }
     fflush(stdin);
     printf("\n\nNUMBER OF UPPERCASE LETTERS IN STRING ARE : %d",a);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void lowcase()
{
    char ch;do{system("cls");char str[50];int count=0,i,a=0;
    printf("\n\n\t\t\tLOWERCASE LETTERS IN A STRING\n\n");
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(str);
    for(i=0;str[i]!=NULL;i++)
    {
        count=str[i];
        if(count>=97&&count<=122)
            a++;
    }
     fflush(stdin);
     printf("\n\nNUMBER OF LOWERCASE LETTERS IN STRING ARE : %d",a);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void numstring()
{
    char ch;do{system("cls");char str[50];int count=0,i,a=0;
    printf("\n\n\t\t\tNUMBERS OF DIGITS IN A STRING\n\n");
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(str);
    for(i=0;str[i]!=NULL;i++)
    {
        count=str[i];
        if(count>=47&&count<=58)
            a++;
    }
     fflush(stdin);
     printf("\n\nNUMBER OF DIGITS IN STRING ARE : %d",a);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void word()
{
    char ch;do{system("cls");char str[50];int count=0,a=0;
    printf("\n\n\t\t\tNUMBER OF WORDS IN A STRING\n\n");
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(str);
   int i,j,k,l;
for(i=0;str[i]!=NULL;i++);
for(j=0;str[j]!=NULL;j++)
{
    if(str[0]==' ')
    {
        for(i=0;str[i]!=NULL;i++)
            str[i]=str[i+1];
    }
    else if(str[j]==' ')
{
    if(str[j+1]==' ')
{
    for(k=j;str[k]!=NULL;k++)
{     str[k]=str[k+1];
      }
      j=j-1;
}
}
}j=0;
for(i=0;str[i]!=NULL;i++)
{
    if(str[i]==' ')
    j++;
} fflush(stdin);
printf("\n\nNUMBER OF WORDS IN STRING ARE : %d",(j+1));
printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void fibo()
{
     char ch;do{system("cls");int a=0,i;
    printf("\n\n\t\t\tFIBONACCI SERIES\n\n");
    printf("\n\nENTERTHE LIMIT OF SERIRES : ");
    scanf("%d",&a);
    printf("\n\nSERIES UPTO %d IS  : ",a);
    int *p=(int*)malloc(sizeof(int)*a);
    *p=0;*(p+1)=1;
    printf("%d %d ",*p,*(p+1));
    for( i=2;i<a;i++)
    {
        *(p+i)=*(p+i-1)+*(p+i-2);
        printf("%d ",*(p+i));

    }
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void spaces()
{
      char ch;do{system("cls");char str[100];
      printf("\n\n\t\t\tNUMBER OF SPACES IN STRING\n\n");
      printf("ENTER THE STRING : ");
      fflush(stdin);
     gets(str);
     int i,j,c=0;
     for(j=0;str[j]!=NULL;j++)
     {
        if(str[j]==' ')
          c++;
     }
     printf("\n\nNUMBER OF SPACES IN STRING ARE : %d",c);
        printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
        ch=getch(); fflush(stdin);
    }
    while(ch=='y'||ch=='Y');
}
void dispfaces()
{
     char ch;do{system("cls");char str[50];
      printf("\n\n\t\t\tNUMBER OF SPACES IN A STRING\n\n");
      printf("ENTER THE STRING : ");
      fflush(stdin);
     gets(str);
     printf("\n\nSTRING WITHOUT SPACES IS : ");
     int i,j;
     for(j=0;str[j]!=NULL;j++)
     {
        if(str[j]==' ')
        {

        }
        else{
            printf("%c",str[j]);
        }

     }
         printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
        ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');

}
void cononants()
{
   char ch;do{system("cls");char str[100];int count=0;
    printf("\n\n\t\t\tNUMBER OF CONSTANTS IN A STRING\n\n");
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(str);
   int i;
   for(i=0;str[i]!=NULL;i++)
   {
       if((str[i]>=65&&str[i]<=90)||str[i]>=97&&str[i]<=122){
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
       {
       }
       else
        count++;
}
   }
    printf("\n\nNUMBER OF CONSONANTS IN STRING ARE : %d",count);
   printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');


}
void fandrstring1()
{
   char ch;do{system("cls");char *p;int i,n;char a,b;
    printf("\n\n\t\t\tFIND AND REPLACE ELEMENT AT FIRST OCCURENCE IN A STRING\n\n");
    printf("\n\nENTER THE NUMBER OF CHARACTERS : ");
    scanf("%d",&n);
    p=(char*)malloc(sizeof(char)*n);
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(p);
    printf("\n\nENTER THE CHARACTER TO BE SEARCHED : ");
    a=getche();
    printf("\n\nENTER THE CHARACTER TO BE REPLACE WITH %c : ",a);
    b=getche();
    for(i=0;*(p+i)!=NULL;i++)
    {
        if(*(p+i)==a)
        {
            *(p+i)=b;
            break;
        }
    }
    printf("\n\nCHANGED STRING IS : ");
    printf("%s",p);
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');

}
void findandreplace2()
{
    char ch;do{system("cls");char *p;int i,n;char a,b;
    printf("\n\n\t\t\tFIND AND REPLACE ELEMENT AT FIRST OCCURENCE IN A STRING\n\n");
    printf("\n\nENTER THE NUMBER OF CHARACTERS : ");
    scanf("%d",&n);
    p=(char*)malloc(sizeof(char)*n);
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(p);
    printf("\n\nENTER THE CHARACTER TO BE SEARCHED : ");
    a=getche();
    printf("\n\nENTER THE CHARACTER TO BE REPLACE WITH %c : ",a);
    b=getche();
    for(i=0;*(p+i)!=NULL;i++)
    {
        if(*(p+i)==a)
        {
            *(p+i)=b;
        }
    }
    printf("\n\nCHANGED STRING IS : ");
    printf("%s",p);
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');

}
void uptolow()
{
    char ch;do{system("cls");char *p;int i,n;char a,b;
    printf("\n\n\t\t\tLOWER CASE TO UPPER CASE \n\n");
    printf("\n\nENTER THE NUMBER OF CHARACTERS : ");
    scanf("%d",&n);
    p=(char*)malloc(sizeof(char)*n);
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(p);
    for(i=0;*(p+i)!=NULL;i++)
    {
        if(*(p+i)>=97&&*(p+i)<=122)
            *(p+i)=*(p+i)-32;
    }
    printf("\n\nCONVERTED STRING IS : ");
    printf("%s",p);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');

}
void lowtoup()
{
    char ch;do{system("cls");char *p;int i,n;char a,b;
    printf("\n\n\t\t\tUPPER CASE TO LOWER CASE \n\n");
    printf("\n\nENTER THE NUMBER OF CHARACTERS : ");
    scanf("%d",&n);
    p=(char*)malloc(sizeof(char)*n);
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(p);
    for(i=0;*(p+i)!=NULL;i++)
    {
        if(*(p+i)>=65&&*(p+i)<=90)
            *(p+i)=*(p+i)+32;
    }
    printf("\n\nCONVERTED STRING IS : ");
    printf("%s",p);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');
}
void strev()
{
     char ch;do{system("cls");char *p;int i,n,j;
    printf("\n\n\t\t\tREVERSE A STRING \n\n");
    printf("\n\nENTER NUMBER OF CHARACTER : ");
    scanf("%d",&n);
    p=(char*)malloc(sizeof(char)*n);
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(p);
    printf("\n\nREVERSE STRING IS : ");
    for(i=0;*(p+i)!=NULL;i++);
    for(j=i;j>=0;j--)
        printf("%c",*(p+j));
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');
}
void stringpalin()
{
    char ch;do{system("cls");char *p;int i,n,j,flag;
    printf("\n\n\t\t\tPALINDRONE STRING \n\n");
    printf("\n\nENTER NUMBER OF CHARACTERS : ");
    scanf("%d",&n);
    p=(char*)malloc(sizeof(char)*n);
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(p);
    strupr(p);
    j=strlen(p);
    for(i=0,j=j-1;i<=j;i++,j--)
    {
        if(*(p+i)!=*(p+j))
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("\n\nENTERED STRING IS NOT PALINDRONE");
    else
        printf("\n\nENTERD STRING IS PALINDRONE");
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');

}
void eachrev()
{
    char ch;do{system("cls");char *p;int i,n,j,J,k,l,m;
    printf("\n\n\t\t\tEACH WORD REVERSE \n\n");
    printf("\n\nENTER NUMBER OF CHARACTERS : ");
    scanf("%d",&n);
    p=(char*)malloc(sizeof(char)*n);
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(p);
    J=strlen(p);
    printf("\n\nCHANGED STRING IS : ");
    for(i=0;*(p+i)!=' ';i++);
    m=i;
   for(j=i-1;j>=0;j--)
        printf("%c",*(p+j));
    for(k=J-1;*(p+k)!=' ';k--);
    for(i=i+1;i<=k;i++)
    {
        if(*(p+i)==' ')
        {
            for(j=i;j>=m;j--)
                printf("%c",*(p+j));
            m=i;
        }

    }
    for(J=J-1;J>=k;J--)
        printf("%c",*(p+J));
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');

}
void encrypt()
{
    char ch;do{system("cls");char *p;int i,n,j;
    printf("\n\n\t\t\tENCRYPTED STRING \n\n");
    printf("\n\nENTER NUMBER OF CHARACTERS : ");
    scanf("%d",&n);
    p=(char*)malloc(sizeof(char)*n);
    printf("ENTER THE STRING : ");
    fflush(stdin);
    gets(p);
    printf("\n\nENCRYPTED STRING IS : ");
    for(i=0;*(p+i)!=NULL;i++)
    {
        j=*(p+i);
        if(j!=32)
        {
           *(p+i)=*(p+i)+1;
        }
    }
    printf("%s",p);
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');
}
void multiplespace()
{
    char ch;do{system("cls");char *p;int i,n,j;
    printf("\n\n\t\t\tMULTIPLE SPACES REMOVAL \n\n");
    printf("\n\nENTER NUMBER OF CHARACTERS : ");
    scanf("%d",&n);
    p=(char*)malloc(sizeof(char)*n);
    printf("\n\nENTER THE STRING : ");
    fflush(stdin);
    gets(p);
    printf("\n\nSTRING WITHOUT MULTIPLE SPACES IS : ");
    for(i=0;*(p+i)!=NULL;i++)
    {
        if(*p==' ')
        {
            for(j=0;*(p+j);j++)
                *(p+j)=*(p+j+1);
        }
        else if(*(p+i)==' ')
        {
            if(*(p+i+1)==' ')
            {
                for(j=i;*(p+j)!=NULL;j++)
                    *(p+j)=*(p+j+1);
                    i=i-1;
            }

        }

    }
    printf("%s",p);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');
   }
void shortname()
{
    char ch;do{system("cls");char *p;int i,n,j,l,m,count=0;
    printf("\n\n\t\t\tSHORT FORM OF NAME \n\n");
    printf("\n\nENTER NUMBER OF CHARACTERS IN YOUR NAME : ");
    scanf("%d",&n);
    p=(char*)malloc(sizeof(char)*n);
    printf("\n\nENTER YOUR NAME : ");
    fflush(stdin);
    gets(p);
    printf("\n\nSHORT FORM OF YOUR NAME IS : ");
    l=strlen(p);
    for(i=0;i<l;i++)
    {
        if(*(p+i)==' ')
            count++;
    }
    if(count==0)
        printf("%s",p);
    else{
    for(m=l-1;*(p+m)!=' ';m--);
    for(i=0;i<=m;i++)
    {
        if(*(p+i)==' ')
        {
            for(j=i-1;(*(p+j)!=' ')&&j>0;j--);
            if(j==0)
                printf("%c.",*(p));
            else if(*(p+j)==' ')
                printf("%c.",*(p+j+1));
        }
    }
    for(i=m+1;i<l;i++)
        printf("%c",*(p+i));}
         printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');
}
void temp()
{
    char ch;do{system("cls"); float t;
    printf("\n\n\t\t\tDEGREE CELCIUS TO FAHRENHEIT \n\n");
    printf("\n\nENTER TEMPERATURE IN CELCIUS : ");
    scanf("%f",&t);
    float f=((9*t)/5)+32;
    printf("\n\nTEMPERATURE IN FAHRENHEIT IS : %0.2f F",f);
      printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');
}
void si()
{
    char ch;do{system("cls"); float t,p,r,si;
    printf("\n\n\t\t\tSIMPLE INTEREST \n\n");
    printf("\n\nENTER PRINCIPLE : ");
    scanf("%f",&p);
    printf("\n\nENTER RATE : ");
    scanf("%f",&r);
     printf("\n\nENTER TIME : ");
     scanf("%f",&t);
    si=(p*r*t)/100.0;
    printf("\n\nSIMPLE INTEREST IS : %0.2f",si);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');
}
void leap()
{
     char ch;do{system("cls");
    printf("\n\n\t\t\tLEAP YEAR  \n\n");
     int a,n;
    printf("\n\nenter the year : ");
    scanf("%d",&n);
    if(n%400==0)
        printf("\n\ngiven numbers is leap year");
    else if(n%100==0)
        printf("\n\ngiven number is not leap year");
    else if(n%4==0)
        printf("\n\ngiven number is leap year");
    else
        printf("\n\ngiven number is not leap year");
         printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');

}
void sumof2arr()
{
    char ch;do{ system("cls");
    int i, n,m, sum=0;
        printf("\n\n\t\t\tSUM OF ELEMENTS OF 2 ARRAY:\n");
       printf("\nENTER NUMBER OF ELEMENTS IN 1ST ARRAY : ");
       scanf("%d",&n);
       int a[n];
       printf("\n\nINPUT %d ELEMENTS IN ARRAY : ",n);
       for(i=0;i<n;i++)
        {
	      scanf("%d",&a[i]);
	    }
	    printf("\n\nENTER NUMBER OF ELEMENTS IN 2ND ARRAY : ");
       scanf("%d",&m);
       int b[m];
       printf("\n\nINPUT %d ELEMENTS IN ARRAY : ",n);
       for(i=0;i<m;i++)
        {
	      scanf("%d",&b[i]);
	    }
	    if(m>n)
        {
            int c[m];
            for(i=0;i<n;i++)
                c[i]=a[i]+b[i];
            for(i=n;i<m;i++)
                c[i]=b[i];
            printf("\n\nSUM OF TWO ARRAY IS : ");
            for(i=0;i<m;i++)
                printf("%d ",c[i]);
        }
                else if(m<n)
        {
            int c[n];
            for(i=0;i<m;i++)
                c[i]=a[i]+b[i];
            for(i=m;i<n;i++)
                c[i]=a[i];
            printf("\n\nSUM OF TWO ARRAY IS : ");
            for(i=0;i<n;i++)
                printf("%d ",c[i]);
        }
        else if(m==n)
        {
            int c[n];
            for(i=0;i<m;i++)
                c[i]=a[i]+b[i];
            printf("\n\nSUM OF TWO ARRAY IS : ");
            for(i=0;i<m;i++)
                printf("%d ",c[i]);
        }
       printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');

}
void special()
{
    char ch;
    do{system("cls");
            int a,i;int rem,rev=1,temp,sum=0;
    printf("\n\n\t\t\tSPECIAL NUMBER");
    printf("\n\nENTER A NUMBER : ");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        rem=a%10;
        for(i=rem;i>=1;i--)
            rev*=i;
        sum=sum+rev;
        a=a/10;
        rev=1;
    }
    if(sum==temp)
        printf("\n\nNUMBER IS SPECIAL");
    else
        printf("\n\nNUMBER IS NOT SPECIAL");

     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void enter2d()
{
    char ch;
    do{system("cls");
            int a,b,j,i;int rem,rev=1,temp,sum=0;
            printf("\n\n\t\t\t2D ARRAY PRINT");
    printf("\n\nENTER NUMBERS OF ROWS : ");
    scanf("%d",&a);
    printf("\n\nENTER NUMBER OF COLOUMN : ");
    scanf("%d",&b);
    int ar[a][b];
    printf("\n\nENTER ELEMENTS : ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("\n\nARRAY IN 2D FORM IS : \n\t\t\t");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d",ar[i][j]);
        }
        printf("\n\t\t\t");
    }
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void rev2d()
{
    char ch;
    do{system("cls");
            int a,b,j,i;
            printf("\n\n\t\t\t2D ARRAY PRINT");
    printf("\n\nENTER NUMBERS OF ROWS : ");
    scanf("%d",&a);
    printf("\n\nENTER NUMBER OF COLOUMN : ");
    scanf("%d",&b);
    int ar[a][b];int ar2[a][b];
    printf("\n\nENTER ELEMENTS : ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
        printf("\n");
    }
    printf("\nREVERSE ARRAY IS : \n\t\t\t");
    for(i=0;i<a;i++)
    {
     for(j=b-1;j>=0;j--)
            {
                printf("%d ",ar[i][j]);
            }
            printf("\n\t\t\t");
    }

    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void sum2matrice()
{
    char ch;
    do{system("cls");
            int a,b,m,n,j,i;
            printf("\n\n\t\t\tSUM OF 2 SQUARE MATRIX");
    printf("\n\nENTER NUMBERS OF ROWS OF 1ST ARRAY : ");
    scanf("%d",&a);
    printf("\n\nENTER NUMBER OF COLOUMN 1ST ARRAY : ");
    scanf("%d",&b);
    int ar1[a][b];
    printf("\n\nENTER ELEMENTS : ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar1[i][j]);
        }
    }
    printf("\n\nENTER NUMBERS OF ROWS OF 2ND ARRAY : ");
    scanf("%d",&m);
    printf("\n\nENTER NUMBER OF COLOUMN OF 2ND ARRAY: ");
    scanf("%d",&n);
    int ar2[m][n];
    int sum[a][b];
    printf("\n\nENTER ELEMENTS : ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar2[i][j]);
        }
    }
    if(a==m&&b==n){
     printf("\n\nSUM OF 2 MATRICES IS  :\n\t\t\t ");
     for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            sum[i][j]=ar1[i][j]+ar2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n\t\t\t");
    }
    }
    else printf("\n\n 2 MAATRIX'S ARE NOT OF SAME DIMESIONS");
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void sumofpdiag()
{
    char ch;
    do{system("cls");
    int a,b,j,i;int sum=0;
    printf("\n\n\t\t\t2D ARRAY PRIMARY DIAGONAL ELEMENT SUM");
    printf("\n\nENTER NUMBERS OF ROWS : ");
    scanf("%d",&a);
    printf("\n\nENTER NUMBER OF COLOUMN : ");
    scanf("%d",&b);
    if(a==b){
    int ar[a][b];
    printf("\n\nENTER ELEMENTS : ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
            {
                if(i==j)
                    sum=sum+ar[i][j];
            }
    }
    printf("\nTHE SUM OF PRIMARY DIAGONALS IS : %d",sum);}
    else printf("\nMATRIX IS NOT A SQUARE MATRIX");
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void sumofsdiag()
{
     char ch;
    do{system("cls");
    int a,b,j,i;int sum=0;
    printf("\n\n\t\t\t2D ARRAY PRIMARY DIAGONAL ELEMENT SUM");
    printf("\n\nENTER NUMBERS OF ROWS : ");
    scanf("%d",&a);
    printf("\n\nENTER NUMBER OF COLOUMN : ");
    scanf("%d",&b);
    if(a==b){
    int ar[a][b];
    printf("\n\nENTER ELEMENTS : ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
            {
                if(i+j==a-1)
                    sum=sum+ar[i][j];
            }
    }
    printf("\nTHE SUM OF SECONDARY DIAGONALS IS : %d",sum);
    }
    else
        printf("\nMATRIX IS NOT A SQUARE MATRIX");
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void transpose()
{
    char ch;
    do{system("cls");
            int a,b,j,i;int rem,rev=1,temp,sum=0;
            printf("\n\n\t\t\tTRANSPOSE OF A MATRIX");
    printf("\n\nENTER NUMBERS OF ROWS : ");
    scanf("%d",&a);
    printf("\n\nENTER NUMBER OF COLOUMN : ");
    scanf("%d",&b);
    int ar[a][b];int ar2[a][b];
    printf("\n\nENTER ELEMENTS : ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);

        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            ar2[i][j]=ar[j][i];

        }
    }
    printf("\n\nTRANSPOSE OF MATRIX IS : \n\t\t\t");
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d ",ar2[i][j]);
        }
        printf("\n\t\t\t");
    }
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void multiply2d()
{
     char ch;
    do{system("cls");
            int a,b,m,n,j,i,k;
            printf("\n\n\t\t\tMULTIPLICATION OF 2 SQUARE MATRIX");
    printf("\n\nENTER NUMBERS OF ROWS OF 1ST ARRAY : ");
    scanf("%d",&a);
    printf("\n\nENTER NUMBER OF COLOUMN 1ST ARRAY : ");
    scanf("%d",&b);
    int ar1[a][b];
    printf("\n\nENTER ELEMENTS : ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar1[i][j]);
        }
    }
    printf("\n\nENTER NUMBERS OF ROWS OF 2ND ARRAY : ");
    scanf("%d",&m);
    printf("\n\nENTER NUMBER OF COLOUMN OF 2ND ARRAY: ");
    scanf("%d",&n);
    int ar2[m][n];
    if(b==m){
    int sum[a][n];
    printf("\n\nENTER ELEMENTS : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ar2[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<n;j++)
            {
                sum[i][j]=0;
            }
    }

    for(i=0;i<a;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<b;k++)
                sum[i][j]+=ar1[i][k]*ar2[k][j];
        }
    }
    printf("\n\nMULTIPLIED MATRIX IS : \n\t\t\t");
    for(i=0;i<a;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n\t\t\t");
    }}
    else printf("\n\n MULTIPLICATION NOT POSSIBLE");
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void rotate()
{
     char ch;
    do{system("cls");
            int a,b,j,i;int rem,rev=1,temp,sum=0;
            printf("\n\n\t\t\tROTATION OF A SQUARE MATRIX");
    printf("\n\nENTER NUMBERS OF ROWS : ");
    scanf("%d",&a);
    printf("\n\nENTER NUMBER OF COLOUMN : ");
    scanf("%d",&b);
    int ar[a][b];int ar2[a][b];
    printf("\n\nENTER ELEMENTS : ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);

        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            ar2[i][j]=ar[j][i];

        }
    }

    printf("\n\nROTATED MATRIX IS : \n\t\t\t");
    for(i=0;i<a;i++)
    {
     for(j=b-1;j>=0;j--)
            {
                printf("%d ",ar2[i][j]);
            }
            printf("\n\t\t\t");
    }
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void table()
{
    char ch;
    do{int i,n;
    system("cls");
    printf("\n\n\t\t\t TABLE OF A NUMBER");
    printf("\n\n ENTER A NUMBER : ");
    scanf("%d",&n);
    printf("\n\nTABLE OF ENTERED NUMBER IS :\n");
    for(i=1;i<=10;i++)
    {
        printf("\n\t\t\t%d X %d= %d",n,i,(i*n));
    }
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');


}
void magic()
{
    char ch;
    do{system("cls");
            int a;int rem,rev=0,temp,sum=0,temp2;
    printf("\n\n\t\t\tMAGIC NUMBER");
    printf("\n\nENTER A NUMBER : ");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
         rem=a%10;
         sum=sum+rem;
         a=a/10;
    }
    temp2=sum;
    while(sum>0)
    {
        rem=sum%10;
        rev=(rev*10)+rem;
        sum=sum/10;
    }
    if(temp==(temp2*rev))
        printf("\n\nENTERED NUMBER IS MAGIC");
    else
        printf("\n\nENTERED NUMBER IS NOT MAGIC");

     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void starstaircasepattern()
{

    char ch;
    do{system("cls");
            int a,i,j;
    printf("\n\n\t\t\tSTAIRCASE STAR PATTERN");
    printf("\n\nENTER LIMIT : ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
    }
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void reversestaircase()
{
    char ch;
    do{system("cls");
            int a,i,j;
    printf("\n\n\t\t\tREVERSE STAIRCASE STAR PATTERN");
    printf("\n\nENTER LIMIT : ");
    scanf("%d",&a);
    printf("\n\t\t\t");
    for(i=a;i>=1;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n\t\t\t");
    }
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void oppstaircase()
{
    char ch;
    do{system("cls");
            int a,i,j,k;
    printf("\n\n\t\t\tREVERSE STAIRCASE STAR PATTERN");
    printf("\n\nENTER LIMIT : ");
    scanf("%d",&a);
    printf("\n\t\t\t");
    for(i=1;i<=a;i++)
    {
        for(j=a-i;j>0;j--)
            printf(" ");
        for(k=i;k>0;k--)
            printf("*");
        printf("\n\t\t\t");
    }
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void diamond()
{
   char ch;
    do{system("cls");
            int a,i,j,k,l;
    printf("\n\n\t\t\tDIAMOND PATTERN");
    printf("\n\nENTER ODD LIMIT : ");
    scanf("%d",&a);
    printf("\n\t\t\t");
    for(i=1;i<=(a/2)+1;i++)
    {
        for(j=(a/2)+1-i;j>0;j--)
            printf(" ");
        for(k=(2*i)-1;k>0;k--)
            printf("*");
        printf("\n\t\t\t");
    }
    for(i=i-2,l=1;i>0;i--,l++)
    {
        for(j=l;j>0;j--)
            printf(" ");
        for(k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n\t\t\t");
    }
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void butterfly()
{
     char ch;
    do{system("cls");
            int a,i,j,k,l,m;
    printf("\n\n\t\t\tBUTTERFLY PATTERN");
    printf("\n\nENTER ODD LIMIT : ");
    scanf("%d",&a);
    if(a%2!=0){
    printf("\n\t\t\t");
    for(i=1;i<(a/2)+1;i++)
    {
        for(j=i;j>0;j--)
            printf("*");
        for(k=1;k<=2*((a/2)+1-i)-1;k++)
            printf(" ");
        for(l=i;l>0;l--)
            printf("*");
            printf("\n\t\t\t");
    }
    for(i=1;i<=a;i++)
        printf("*");
        printf("\n\t\t\t");
    for(i=a/2,l=0;i>0;i--,l++)
    {
        for(j=i;j>0;j--)
            printf("*");
        for(k=1;k<=(2*l)+1;k++)
            printf(" ");
        for(m=i;m>0;m--)
            printf("*");
        printf("\n\t\t\t");
    }
    }
    else
        printf("\n\nYOU HAVE TO ENTER ODD LIMIT");
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void complexadd()
{
    char ch;
    do{system("cls");
            int a,i,j,k,l,m;
    printf("\n\n\t\t\tADDITION OF COMPLEX NUMBERS");
    printf("\n\nENTER REAL PART OF 1ST COMPLEX : ");
    scanf("%d",&a);
     printf("\n\nENTER IMAGINARY PART OF 1ST COMPLEX : ");
     scanf("%d",&i);
     printf("\n\nFIRST COMPLEX NUMBER IS : %d + %di ",a,i);
     printf("\n\nENTER REAL PART OF 2ND COMPLEX : ");
    scanf("%d",&j);
     printf("\n\nENTER IMAGINARY PART OF 2ND COMPLEX : ");
     scanf("%d",&k);
      printf("\n\nSECOND COMPLEX NUMBER IS : %d + %di ",j,k);
      l=a+j;
      m=i+k;
      printf("\n\nSUM IS : %d + %di",l,m);
       printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void complexminus()
{
    char ch;
    do{system("cls");
            int a,i,j,k,l,m;
    printf("\n\n\t\t\tSUBSTRACTION OF COMPLEX NUMBERS");
    printf("\n\nENTER REAL PART OF 1ST COMPLEX : ");
    scanf("%d",&a);
     printf("\nENTER IMAGINARY PART OF 1ST COMPLEX : ");
     scanf("%d",&i);
     printf("\nFIRST COMPLEX NUMBER IS : %d + %di ",a,i);
     printf("\nENTER REAL PART OF 2ND COMPLEX : ");
    scanf("%d",&j);
     printf("\nENTER IMAGINARY PART OF 2ND COMPLEX : ");
     scanf("%d",&k);
      printf("\nSECOND COMPLEX NUMBER IS : %d + %di ",j,k);
      l=a-j;
      m=i-k;
      printf("\n\nDIFFERENCE IS IS : %d + %di",l,m);
       printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void complexmult()
{
        char ch;
    do{system("cls");
            int a,i,j,k,l,m,c,d,e;
    printf("\n\n\t\t\tMULTIPLICATION OF COMPLEX NUMBERS");
    printf("\n\nENTER REAL PART OF 1ST COMPLEX : ");
    scanf("%d",&a);
     printf("\nENTER IMAGINARY PART OF 1ST COMPLEX : ");
     scanf("%d",&i);
     printf("\nFIRST COMPLEX NUMBER IS : %d + %di ",a,i);
     printf("\nENTER REAL PART OF 2ND COMPLEX : ");
    scanf("%d",&j);
     printf("\nENTER IMAGINARY PART OF 2ND COMPLEX : ");
     scanf("%d",&k);
      printf("\nSECOND COMPLEX NUMBER IS : %d + %di ",j,k);
      l=a*j;
      m=i*k;
      c=a*k;
      d=i*j;
      e=c+d;
      printf("\n\nPRODUCT IS IS : %d + %di",(l-m),e);
       printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void concat()
{
    char ch;do{system("cls");char *p;int i,n,j,l,m,count=0;
    printf("\n\n\t\t\tADDING 2 STRINGS \n\n");char str1[100];char str2[100];
    printf("\n\nENTER 1ST STRING : ");
    fflush(stdin);
    gets(str1);
    printf("\nENTER 2ND STRING : ");
    fflush(stdin);
    gets(str2);
    strcat(str1,str2);
    printf("\n\nCONCATINATED STRINGS ARE : %s",str1);
      printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void deletechar()
{
    char ch;do{system("cls");char *p;int i,n,j;char q;
    printf("\n\n\t\t\tSPECIFIED CHARACTER REMOVAL \n\n");
    printf("\n\nENTER NUMBER OF CHARACTERS : ");
    scanf("%d",&n);
    p=(char*)malloc(sizeof(char)*n);
    printf("\n\nENTER THE STRING : ");
    fflush(stdin);
    gets(p);
    printf("\n\nENTER CHARACTER TO BE DELETED : ");
    fflush(stdin);
    q=getche();
    for(i=0;*(p+i)!=NULL;i++)
    {
        if(*(p+i)==q)
        {
            for(j=i;*(p+j)!=NULL;j++)
                *(p+j)=*(p+j+1);
            break;
        }
    }
    printf("\n\nCHANGED STRING IS : %s",p);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void deleteallcharacter()
{
     char ch;do{system("cls");char *p;int i,n,j;char q;
    printf("\n\n\t\t\tSPECIFIED CHARACTER REMOVAL FROM ENTIRE STRING \n\n");
    printf("\n\nENTER NUMBER OF CHARACTERS : ");
    scanf("%d",&n);
    p=(char*)malloc(sizeof(char)*n);
    printf("\n\nENTER THE STRING : ");
    fflush(stdin);
    gets(p);
    printf("\n\nENTER CHARACTER TO BE DELETED : ");
    fflush(stdin);
    q=getche();
    for(i=0;*(p+i)!=NULL;i++)
    {
        if(*(p+i)==q)
        {
            for(j=i;*(p+j)!=NULL;j++)
                *(p+j)=*(p+j+1);
            i=i-1;
        }
    }
    printf("\n\nCHANGED STRING IS : %s",p);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void salary()
{
   char ch;
    do{system("cls");
            float a,fs;
    printf("\n\n\t\t\tNET SALARY");
    printf("\n\nENTER YOUR SALARY : ");
    scanf("%f",&a);
    printf("\nTA= 10%% \nDA=20%% \nHRA=15%% \nPF=14%% ");
    fs=a+(0.1*a)+(0.20*a)+(0.15*a)-(0.14*a);
    printf("\n\nNET SALARY IS : %0.2f",fs);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void series1()
{
   char ch;
    do{system("cls");
            int a,sum=0;
    printf("\n\n\t\t\tSUM N NATURAL NUMBERS");
    printf("\n\nENTER VALUE OF N : ");
    scanf("%d",&a);
    sum=(a*(a+1))/2;
    printf("\n\nSUM OF NATURAL NUMBERS UPTO %d IS : %d",a,sum);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void series2()
{
     char ch;
    do{system("cls");
            int a,sum=0;
    printf("\n\n\t\t\tSUM OF SQUARE OF N NATURAL NUMBERS");
    printf("\n\nENTER VALUE OF N : ");
    scanf("%d",&a);
    sum=(a*((a+1)*(2*a+1)))/6;
    printf("\n\nSUM OF SQUARE OF NATURAL NUMBERS UPTO %d IS : %d",a,sum);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void series3()
{
    char ch;
    do{system("cls");
            int a,sum=0;
    printf("\n\n\t\t\tSUM OF CUBE OF N NATURAL NUMBERS");
    printf("\n\nENTER VALUE OF N : ");
    scanf("%d",&a);
    int b=a+1;
    sum=(a*a*b*b)/4;
    printf("\n\nSUM OF CUBE OF NATURAL NUMBERS UPTO %d IS : %d",a,sum);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void freqentered()
{
     char ch;
    do{system("cls");
    int *p;int a,i;int rem=0,temp;
    printf("\n\n\t\t\tFREQUENCY OF A ELEMENT");
    printf("\n\nENTER SIZE OF ARRAY : ");
    scanf("%d",&a);
    p=(int*)malloc(sizeof(int)*a);
    printf("\n\nENTER %d ELEMENTS : ",a);
    for(i=0;i<a;i++)
    {
       scanf("%d",p+i);
    }
    printf("\n\nENTER ELEMENT TO BE SEARCHED : ");
    scanf("%d",&temp);
    for(i=0;i<a;i++){
        if(*(p+i)==temp)
        {
            rem+=1;
        }
    }
    if(rem>0)
    {
        printf("\n\nELEMENT COMES %d TIMES IN ARRAY ",rem);
    }
    else
        printf("\n\nELEMENT IS NOT PRESENT IN ARRAY");

    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void ke()
{
     char ch;
    do{
     system("cls");
    float r,q,ke;
    printf("\n\n\t\t\tKINETIC ENERGY\n\n");
    printf("ENTER THE MASS OF PARTICLE: ");
    scanf("%f",&r);
    printf("\nENTER THE VELOCITY OF PARTICLE: ");
    scanf("%f",&q);
    ke=(r*q*q)/2;
    printf("\n\nKINECTIC ENERGY OF PARTICLE IS : %0.2f",ke);
    printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void bill()
{
   char ch;
    do{
     system("cls");
    int r; float q;
    printf("\n\n\t\t\tELECTRICITY BILL\n\n");
    printf("\n\n UNITS\t\t\t\t\t\t RATE\n");
    printf("1)0-100  \t\t\t\t  0.40 rupees/unit\n");
    printf("2)101-200  \t\t\t\t  1 rupees/unit\n");
    printf("3)above 200 \t\t\t\t  1.50 rupees/unit\n");
    printf("\nENTER UNITS CONSUMED : ");
    scanf("%d",&r);
    if(r>0&&r<=100)
        q=r*0.4;
    else if(r>100&&r<=200)
        q=(r-100)*1+100*0.4;
    else
        q=100*0.4+100*1+(r-200)*1.50;
    printf("\n\nBILL IS  : %0.2f RUPEES",q);
     printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();
    }
    while(ch=='y'||ch=='Y');
}
void temp2()
{
     char ch;do{system("cls"); float t;
    printf("\n\n\t\t\tDEGREE FAHRENHEIT TO CELCIUS \n\n");
    printf("\n\nENTER TEMPERATURE IN FAHRENHEIT : ");
    scanf("%f",&t);
    float f=(5*(t-32))/9;
    printf("\n\nTEMPERATURE IN CELCIUS IS : %0.2f C",f);
      printf("\n\n\t\t\tIF YOU WANT TO DO IT AGAIN PRESS Y ");
    ch=getch();fflush(stdin);
    }
    while(ch=='y'||ch=='Y');
}

int main()
{
    int ch;
    printf("\t\t\t\t HELLO FRIENDS\n\n\n");
    printf("\t\tBELOW IS THE LIST OF SOME PROGRAMS. ENTER THE SERIAL NO. OF THE PROGRAM YOU WANT TO RUN:-\n ");
    printf("\n\n1) BASIC CALCULATOR\n\n2) AREA & CIRCUMFERENCE OF CIRCLE\n\n3) SQUARE AND CUBE OF  NUMBER\n\n4) SWAP VALUES OF TWO VARIABLES\n");
    printf("\n5) EVEN & ODD\n\n6) TABLE OF A NUMBER \n\n7) SALARY\n\n8) KINETIC ENERGY\n\n9) CELCIUS TO FAHRENHEIT\n");
    printf("\n10) FAHRENHEIT TO CELCIUS\n");
    printf("\n\n\t\t\t PRESS 0 FOR MORE PROGRAMS\n\n\t\t\t\tPRESS E TO EXIT");
    scanf("%d",&ch);
    system("cls");
    if(ch==1)
        {
            calc();
            system("cls");
            printf("\n\n\t\t\t ******THANKS FOR USING OUR PANKAJ******\n\n");
        }
    else if(ch==2)
        {
            area();
            system("cls");
            printf("\n\n\t\t\t ******THANKS FOR USING OUR PROGRAM******\n\n");

        }
   else if(ch==3)
        {
            sqcu();
            system("cls");
            printf("\n\n\t\t\t ******THANKS FOR USING OUR PROGRAM******\n\n");

        }
   else if(ch==4)
        {
            swap();
            system("cls");
            printf("\n\n\t\t\t ******THANKS FOR USING OUR PROGRAM******\n\n");

        }
   else if(ch==5)
        {
            pt();
            system("cls");
            printf("\n\n\t\t\t  ******THANKS FOR USING OUR PROGRAM******\n\n");

        }
   else if(ch==6)
        {
            table();
            system("cls");
            printf("\n\n\t\t\t******THANKS FOR USING OUR PROGRAM******\n\n");


        }
   else if(ch==7)
        {
            salary();
            system("cls");
            printf("\n\n\t\t\t ******THANKS FOR USING OUR PROGRAM******\n\n");

        }
   else if(ch==8)
        {
            ke();
            system("cls");
            printf("\n\n\t\t\t****** THANKS FOR USING OUR PROGRAM****** \n\n");

        }
   else if(ch==9)
        {
            temp();
            system("cls");
            printf("\n\n\t\t\t ******THANKS FOR USING OUR PROGRAM******\n\n");

        }
   else if(ch==10)
        {
            temp2();
            system("cls");
            printf("\n\n\t\t\t *****THANKS FOR USING OUR PROGRAM******\n\n");

        }
         else if(ch=='e'||ch=='E')
         {
             return;
         }

   else if(ch==0){
        system("cls");
        char ch1;
        printf("\n\t\t\t HELLO FRIENDS");
        printf("\n\n11) ADDITION OF COMPLEX NUMBER\n\n12) SUBSTRACTION OF COMPLEX OF NUMBER\n\n13) MULTIPLICATION OF COMPLEX NUMBER\n\n14) LCM AND HCF OF 2 NUMBERS\n\n15) MAXIMUMAND MIN AMONG 2 NUMBERS\n\n");
        printf("16) AVERAGE MARKS\n\n17) ROOTS OF QUADRATIC EQUATION\n\n18) SIMPLE INTEREST\n\n19) CHECK FOR LEAP YEAR\n\n20) ELIGIBILITY FOR VOTE AND MARRAIGE\n");
        printf("\n\n\t\t\tPRESS 0 FOR MORE PROGRAMS\n\n\t\t\t\tPRESS E TO EXIT");
        scanf("%d",&ch1);
        system("cls");
         if(ch1==11)
            {
                complexadd();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
        else if(ch1==12)
            {
                complexminus();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
       else if(ch1==13)
            {
                complexmult();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
        else if(ch1==14)
            {
                lcm();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
       else if(ch1==15)
            {
                maxmin();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
       else if(ch1==16)
            {
                marksheet();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
        else if(ch1==17)
            {
                quad();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
        else if(ch1==18)
            {
                si();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
       else if(ch1==19)
            {
                leap();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");
            }
      else if(ch1==20)
            {
                elig();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
          else if(ch1=='e'||ch1=='E')
         {
             return;
         }
      else if(ch1==0)
            {
                system("cls");
                char ch2;
                printf("\n\t\t\t HELLO FRIENDS");
                printf("\n\n21) ELECTRICITY BILL\n\n22) MIDDLE NUMBER OF 3 NUMBERS\n\n23) NCR OF NUMBER\n\n24) FACTORIAL \n\n25) ASCII VALUE OF A CHARACTER\n\n");
                printf("26) DECIMAL TO BINARY CONVERSION\n\n27) DECIMAL TO OCTAL\n\n28) DECIMAL TO HEXADECIMAL\n\n29) NUMBER OF DIGITS IN A NUMBER\n\n30) SUM OF DIGITS OF A NUMBER\n");
                printf("\n\n\t\t\tPRESS 0 FOR MORE PROGRAMS\n\n\t\t\t\tPRESS E TO EXIT\n");
                scanf("%d",&ch2);
                system("cls");
                 if(ch2==21){
                bill();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
                  else if(ch2==22)
                    {
                        mn();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                  else if(ch2==23)
                    {
                        ncr();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                  else if(ch2==24)
                    {
                        fact();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch2==25)
                    {
                        ascii();
                         system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch2==26)
                    {
                    conv1();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                    else if(ch2==27)
                    {
                    conv2();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch2==28)
                        {
                            conv3();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                    else if(ch2==29)
                        {
                            nod();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                   else if(ch2==30)
                        {
                            sod();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                      else if(ch2=='e'||ch2=='E')
         {
             return;
         }
                   else if(ch2==0)
            {
                system("cls");
                char ch3;
                printf("\n\t\t\t HELLO FRIENDS");
                printf("\n\n31) REVERSE A NUMBER\n\n32) SUM OF EVEN AND ODD DIGITS OF A NUMBER\n\n33) PRIME NUMBER \n\n34) PALINDRONE NUMBER\n\n35) ARMSTRONG NUMBER\n\n");
                printf("36) PERFECT NUMBER\n\n37) SPECIAL NUMBER \n\n38) MAGIC NUMBER \n\n39)TWIN PRIME NUMBER\n\n40) PRINT ARRAY\n");
                printf("\n\n\t\t\tPRESS 0 FOR MORE PROGRAMS\n\n\t\t\t\tPRESS E TO EXIT\n");
                scanf("%d",&ch3);
                system("cls");

                if(ch3==31){
                rev();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
                    else if(ch3==32)
                    {
                        soe();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                  else if(ch3==33)
                    {
                        prime();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                  else if(ch3==34)
                    {
                        palin();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                  else if(ch3==35)
                    {
                        arms();
                         system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch3==36)
                    {
                    perfect();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch3==37)
                    {
                    special();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch3==38)
                        {
                            magic();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                   else if(ch3==39)
                        {
                            twin();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                    else if(ch3==40)
                        {
                            pa();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                          else if(ch3=='e'||ch3=='E')
         {
             return;
         }
                   else if(ch3==0)
            {
                system("cls");
                char ch4;
                printf("\n\t\t\t HELLO FRIENDS");
                printf("\n\n41) SUM OF NUMBERS IN ARRAY \n\n42) REVERSE AN ARRAY\n\n43) PRODUCT OF ELEMENTS OF ARRAY\n\n44) LARGEST ELEMENT OF ARRAY\n\n45) SMALLEST NUMBER IN ARRAY\n\n");
                printf("46) NUMBER OF EVEN AND ODD ELEMNETS IN ARRAY\n\n47) SUM OF EVEN AND ODD NUMBERS IN ARRAY\n\n48) PRIME NUMBERS IN AN ARRAY\n\n49) PALINDRONE NUMBERS IN ARRAY\n\n50) ARNMSTRONG NUMBER IN ARRAY\n");
                printf("\n\n\t\t\tPRESS 0 FOR MORE PROGRAMS\n\n\t\t\t\tPRESS E TO EXIT\n");
                scanf("%d",&ch4);
                system("cls");

                if(ch4==41){
                sa();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
                  else if(ch4==42)
                    {
                        arev();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch4==43)
                    {
                        pdtarr();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                 else if(ch4==44)
                    {
                        largestarr();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                 else if(ch4==45)
                    {
                        smallestarr();
                         system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch4==46)
                    {
                    evenoddarr();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch4==47)
                    {
                    evenoddsumarr();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch4==48)
                        {
                            primearr();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                   else if(ch4==49)
                        {
                            palinarr();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                   else if(ch4==50)
                        {
                            armstarr();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                          else if(ch4=='e'||ch4=='E')
         {
             return;
         }
                   else if(ch4==0)
            {
                system("cls");
                char ch5;
                printf("\n\t\t\t HELLO FRIENDS");
                printf("\n\n51) PERFECT NUMBERS IN ARRAY\n\n52) SEARCH AN ELEMENT IN ARRAY\n\n53) SORT ARRAY IN ASSCENDING ORDER\n\n54) LEFT SHIFT ARRAY\n\n55) RIGHT SHIFT ARRAY\n\n");
                printf("56) SORT ARRAY IN DESSCENDING ORDER\n\n57) ADD 2  ARRAY\n\n58) FREQUENCY OF A  NUMBER IN  ARRAY\n\n59) FREQUENCY OF EACH NUMBER IN ARRAY\n\n60) FIBONACCI SERIES\n");
                printf("\n\n\t\t\tPRESS 0 FOR MORE PROGRAMS\n\n\t\t\t\tPRESS E TO EXIT\n");
                scanf("%d",&ch5);
                system("cls");


                   if(ch5==51){
                perfectarr();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
                   else if(ch5==52)
                    {
                        search();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                  else if(ch5==53)
                    {
                        sort();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                  else if(ch5==54)
                    {
                        leshift();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                  else if(ch5==55)
                    {
                        rishift();
                         system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch5==56)
                    {
                    sort2();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch5==57)
                    {
                    sumof2arr();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch5==58)
                        {
                            freqentered();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                   else if(ch5==59)
                        {
                            freq();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                    else if(ch5==60)
                        {
                            fibo();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                          else if(ch5=='e'||ch5=='E')
         {
             return;
         }
                  else if(ch5==0)
            {
                system("cls");
                char ch6;
                printf("\n\t\t\t HELLO FRIENDS");
                printf("\n\n61) SUM OF N NATURAL NUMBER\n\n62) SUM OF SQUARE OF N NATURAL NUMBER\n\n63) SUM OF CUBES OF N NATURAL NUMBER\n\n64) PATTERN 1\n\n65) PATTERN 2\n\n");
                printf("66) PATERN 3\n\n67) DIAMOND PATTERN\n\n68) BUTTERFLY PATTERN\n\n69) PRINT A MATIX\n\n70) REVERSE EACH ROW OF A MATRIX\n");
                printf("\n\n\t\t\tPRESS 0 FOR MORE PROGRAMS\n\n\t\t\t\tPRESS E TO EXIT\n");
                fflush(stdin);
                scanf("%d",&ch6);
                system("cls");

                    if(ch6==61){
                series1();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
                  else if(ch6==62)
                    {
                        series2();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                 else if(ch6==63)
                    {
                        series3();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                 else if(ch6==64)
                    {
                        starstaircasepattern();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                  else if(ch6==65)
                    {
                        reversestaircase();
                         system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                    else if(ch6==66)
                    {
                    oppstaircase();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch6==67)
                    {
                    diamond();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch6==68)
                        {
                            butterfly();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                   else if(ch6==69)
                        {
                            enter2d();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                   else if(ch6==70)
                        {
                            rev2d();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                          else if(ch6=='e'||ch6=='E')
         {
             return;
         }
                    else if(ch6==0)
            {
                system("cls");
                char ch7;
                printf("\n\t\t\t HELLO FRIENDS");
                printf("\n\n71) SUM OF 2 MATRICES\n\n72) SUM OF PRINCIPLE DIAGONAL\n\n73) SUM OF SECONDARY DIAGONAL\n\n74) TRANSPOSE OF A MATRIX\n\n75) MULTIPLICATION OF 2 MATRICES\n\n");
                printf("76) ROTATION OF A MATRIX\n\n77) CHECK ENTERED CHARACTER IS A VOWEL OR NOT\n\n78) LENGTH OF A STRING\n\n79) LENGTH OF A STRING EXCLUDING SPACE\n\n80) VOWELS IN A STRING\n");
                printf("\n\n\t\t\tPRESS 0 FOR MORE PROGRAMS\n\n\t\t\t\tPRESS E TO EXIT\n");
                scanf("%d",&ch7);
                system("cls");
                 if(ch7==71){
                sum2matrice();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
                   else if(ch7==72)
                    {
                        sumofpdiag();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                  else if(ch7==73)
                    {
                        sumofsdiag();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch7==74)
                    {
                        transpose();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch7==75)
                    {
                        multiply2d();
                         system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch7==76)
                    {
                    rotate();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                    else if(ch7==77)
                    {
                    vow();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch7==78)
                        {
                            string1();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                   else if(ch7==79)
                        {
                            string2();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                   else if(ch7==80)
                        {
                            string3();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                          else if(ch7=='e'||ch7=='E')
         {
             return;
         }
                   else if(ch7==0)
            {
                system("cls");
                char ch8;
                printf("\n\t\t\t HELLO FRIENDS");
                printf("\n\n81) NUMBER OF CHARACTERS IN UPEER CASE\n\n82) NUMBER OF CHARACTER IN LOWER CASE\n\n83) NUMBER OF DIGITS IN STRING\n\n84) NUMBER OF WORDS IN STRING\n\n85) NUMBER OF SPACES IN STRING\n\n");
                printf("86) DISPLAY STRING WITHOUT SPACES\n\n87) NUMBER OF CONSONANTS IN A STRING\n\n88) FIND AND REPLACE A ELEMNT AT FIRST OCCURENCE IN STRING\n\n89) FIND AND REPLACE A ELEMNT IN STRING \n\n90) CASE CHANGE FROM LOWER TO UPPER\n");
                printf("\n\n\t\t\tPRESS 0 FOR MORE PROGRAMS\n\n\t\t\t\tPRESS E TO EXIT\n");
                scanf("%d",&ch8);
                system("cls");
                if(ch8==81){
                upcas();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
                  else if(ch8==82)
                    {
                        lowcase();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                  else if(ch8==83)
                    {
                        numstring();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch8==84)
                    {
                        word();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                  else if(ch8==85)
                    {
                        spaces();
                         system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                    else if(ch8==86)
                    {
                    dispfaces();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                    else if(ch8==87)
                    {
                    cononants();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch8==88)
                        {
                            fandrstring1();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                   else if(ch8==89)
                        {
                            findandreplace2();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                   else if(ch8==90)
                        {
                            uptolow();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                          else if(ch8=='e'||ch8=='E')
         {
             return;
         }
                   else if(ch8==0)
            {
                system("cls");
                char ch9;
                printf("\n\t\t\t HELLO FRIENDS");
                printf("\n\n91) CHANGE CASE FROM LOWER TO UPPER\n\n92) REVERSE A STRING\n\n93) PALINDRONE STRING\n\n94) REVERSE EACH WORD OF A STRING\n\n95) ENCRYPT A STRING\n\n");
                printf("96) REMOVE MULTIPLE SPACES\n\n97) SHORT FORM OF A NAME \n\n98) CONCATINATION OF 2 STRING\n\n99) DELETE A CHARACTER FROM STRING AT FIRST OCCURENCE\n\n100) DELETE A CHARACTER FROM STRING\n");
                printf("\n\n\t\t\t\tPRESS E TO EXIT\n");
                scanf("%d",&ch9);
                system("cls");

                if(ch9==91){
                lowtoup();
                system("cls");
                printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

            }
                 else if(ch9==92)
                    {
                        strev();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                 else if(ch9==93)
                    {
                        stringpalin();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                 else if(ch9==94)
                    {
                        eachrev();
                        system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                 else if(ch9==95)
                    {
                        encrypt();
                         system("cls");
                        printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch9==96)
                    {
                    multiplespace();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch9==97)
                    {
                    shortname();
                    system("cls");
                    printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                    }
                   else if(ch9==98)
                        {
                            concat();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                  else if(ch9==99)
                        {
                            deletechar();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                   else if(ch9==100)
                        {
                            deleteallcharacter();
                            system("cls");
                            printf("\n\n\t\t\t*****THANKS FOR USING OUR PROGRAM*****\n\n");

                        }
                        else
                        {
                            printf("\n\n\t\t\tWRONG CHOICE");
                        }

        }}}}}}}}}

return 0;
}
