#include<iostream>
#include<conio.h>
using namespace std;
int an();
int ar();
int nm();
int dt();
int main()
{
    int sel;
    m:
    system("cls");
cout<<"\t\t\t\t\n THIS PROGRAM IS CODED BY AKASH VISHWAKARMA (founder of skytup)\n\n";
cout<<"enter 1 for an             -----(nth term)\n";
cout<<"enter 2 for a             ------(first term)\n";
cout<<"enter 3 for n             ------(the number of term in series)\n";
cout<<"enter 4 for d             ------(common difference)\n";
cout<<"################## PRESS M ANY TIME FOR MAIN MENU ######################\n";
cout<<"****************select 1 of the option*******************"<<endl;
cin>>sel;
if(sel==1){
a:
printf("you selected for an\n");
an();
cout<<"press any key to continue"<<"\t ---------PRESS M FOR EXIT\n";
if(getch()=='m'||getch()=='M'){goto m;}
goto a;
}
else if(sel==2){
b:
printf("you selected for a\n");
ar();
cout<<"press any key to continue"<<"\t ---------PRESS M FOR EXIT";
if(getch()=='m'||getch()=='M'){goto m;}
goto b;
} 
else if(sel==3){
c:
printf("you selected for n\n");
nm();
cout<<"press any key to continue"<<"\t ---------PRESS M FOR EXIT";
if(getch()=='m'||getch()=='M'){goto m;}
goto c;
} 
else if(sel==4){
d: 
printf("you selected for d\n");
dt();
cout<<"press any key to continue"<<"\t ---------PRESS M FOR EXIT";
if(getch()=='m'||getch()=='M'){goto m;}
goto d;
} 
else{
printf("wrong selection");
}
printf("thanks for using this\n");
  
    return 0;
}

int an(){
float a, n, d, an;
printf("enter value of these\n");
printf("a=   ");
scanf("%f",&a);
printf("d=   ");
scanf("%f",&d);
printf("n=   ");
scanf("%f",&n);
an=(a+(n-1)*d);
printf(" your answer is\n an=  %f\n\n",an);
return 0;
}
int ar(){
float a, n, d, an;
printf("enter value of these\n");
printf("an=   ");
scanf("%f",&an);
printf("d=   ");
scanf("%f",&d);
printf("n=   ");
scanf("%f",&n);

a=(an-(n-1)*d);
printf(" your answer is\n a=  %f\n\n",a);
return 0;
}

int nm(){
float a, n, d, an;
printf("enter value of these\n");
printf("an=   ");
scanf("%d",&an);
printf("a=   ");
scanf("%d",&a);
printf("d=   ");
scanf("%d",&d);

n=((an-a)/d)+1;
printf(" your answer is\n n=  %f\n\n",n);
return 0;
}

int dt(){
float a, n, d, an;
printf("enter value of these\n");
printf("an=   ");
scanf("%f",&an);
printf("a=   ");
scanf("%f",&a);
printf("n=   ");
scanf("%f",&n);
d=((an-a)/(n-1));
printf(" your answer is\n d=  %f\n\n",d);
return 0;
}
