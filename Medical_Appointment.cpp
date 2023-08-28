/* Written by Moaz Abdeljalil salah with Nour Eldin fares */
/* both students of Benha faculty of engineering */
/* with double major in communication and computer engineering */
#include <iostream>
using namespace std;
int patient=0;
int maximum=60;
class data
{public:
int age;
char name[20];
int phone;
int day;
int appointment;};
data book[60];
void input()
{cout<<"\n ****Registering an appointment****";
cout<<"\n Enter your name (20 characters) = ";
cin>>book[patient].name;
cout<<"\n Enter your age (number) = ";
cin>>book[patient].age;
cout<<"\n Enter your phone number = ";
cin>>book[patient].phone;
cout<<"\n Choose a day please !";
cout<<"\n 1- Sunday"<<"\n 2- Monday"<<"\n 3- Tuesday"<<"\n 4- Wednesday"<<"\n 5- Thursday"<<"\n";
cin>>book[patient].day;
while (book[patient].day>5||book[patient].day<1)
{cout<<"\n Invalid choice try again "<<"\n"<<"\n Choose a day please !";
cout<<"\n 1- Sunday"<<"\n 2- Monday"<<"\n 3- Tuesday"<<"\n 4- Wednesday"<<"\n 5- Thursday"<<"\n";
cin>>book[patient].day;}
cout<<"\n Choose an appointment ! ";
cout<<"\n 1- 9 am to 9.30 am     7- 12 am to 12.30 pm"<<"\n 2- 9.30 am to 10 am    8- 12.30 pm to 1 pm "<<"\n 3- 10 am to 10.30 am   9- 1 pm to 1.30 pm  "<<"\n 4- 10.30 am to 11 am   10- 1.30 pm to 2 pm  "<<"\n 5- 11 am to 11.30 am   11- 2 pm to 2.30 pm "<<"\n 6- 11.30 am to 12 am   12- 2.30 pm to 3 pm "<<"\n";
cin>>book[patient].appointment;
while (book[patient].appointment>12|| book[patient].appointment<1)
{cout<<"\n Invalid choice try again "<<"\n"<<"\n Choose an appointment ! ";
cout<<"\n 1- 9 am to 9.30 am     7- 12 am to 12.30 pm"<<"\n 2- 9.30 am to 10 am    8- 12.30 pm to 1 pm "<<"\n 3- 10 am to 10.30 am   9- 1 pm to 1.30 pm  "<<"\n 4- 10.30 am to 11 am   10- 1.30 pm to 2 pm  "<<"\n 5- 11 am to 11.30 am   11- 2 pm to 2.30 pm "<<"\n 6- 11.30 am to 12 am   12- 2.30 pm to 3 pm "<<"\n";
cin>>book[patient].appointment;}patient++;}
void check(){
while((patient-1)!=0){
for(int i=0;i<patient-1;i++){
while(book[i].appointment==book[patient-1].appointment&&book[i].day==book[patient-1].day){
cout<<"\n Sorry the appointment is already registered "<<"\n Try another one !";
cout<<"\n \n Choose a day please !";
cout<<"\n 1- Sunday"<<"\n 2- Monday"<<"\n 3- Tuesday"<<"\n 4- Wednesday"<<"\n 5- Thursday"<<"\n";
cin>>book[patient-1].day;
cout<<"\n Choose an appointment ! ";
cout<<"\n 1- 9 am to 9.30 am     7- 12 am to 12.30 pm"<<"\n 2- 9.30 am to 10 am    8- 12.30 pm to 1 pm "<<"\n 3- 10 am to 10.30 am   9- 1 pm to 1.30 pm  "<<"\n 4- 10.30 am to 11 am   10- 1.30 pm to 2 pm  "<<"\n 5- 11 am to 11.30 am   11- 2 pm to 2.30 pm "<<"\n 6- 11.30 am to 12 am   12- 2.30 pm to 3 pm "<<"\n";
cin>>book[patient-1].appointment;}}break;}}
string day (int x){
switch(book[x-1].day){
case 1:return"Sunday";break;
case 2:return"Monday";break;
case 3:return"Tuesday";break;
case 4:return"Wednesday";break;
case 5:return"Thursday";break;}}
string time(int x){
switch(book[x-1].appointment){
case 1:return"9 am to 9.30 am";break;
case 2:return"9.30 am to 10 am";break;
case 3:return"10 am to 10.30 am";break;
case 4:return"10.30 am to 11 am";break;
case 5:return"11 am to 11.30 am";break;
case 6:return"11.30 am to 12 am";break;
case 7:return"12 am to 12.30 pm";break;
case 8:return"12.30 pm to 1 pm";break;
case 9:return"1 pm to 1.30 pm";break;
case 10:return"1.30 pm to 2 pm";break;
case 11:return"2 pm to 2.30 pm";break;
case 12:return"2.30 pm to 3 pm";break;}}
void print_details(){
cout<<"\n Your appointment is registered successfully ! "<<"\n";
cout<<"\n Details : ";
cout<<"\n Your number = "<<patient;
cout<<"\n Your name = "<<book[patient-1].name;
cout<<"\n Your age = "<<book[patient-1].age;
cout<<"\n Your phone number = "<<book[patient-1].phone;
cout<<"\n The day = "<<day(patient);
cout<<"\n The time = "<<time(patient)<<"\n";}
int inquir_1(){
if(patient==0){int t;
cout<<" \n There isn't any registered appointment yet "<<" \n"<<" Book one now ! ";
cout<<" \n 1- Find an appointment ";
cout<<" \n 2- Exit "<<"\n Enter your choice = ";
cin>>t;
while(t!=1&&t!=2){
   cout<<" Invalid choice try again = ";
   cin>>t;}
if(t==1){input();
check();
print_details();
return 1;}
if(t==2){return 0;}}
 return 3;}
void inquir_2 ()
{int n;
cout<<" \n ****Inquiring about your appointment****";
cout<<" \n Enter your number = ";
cin>>n;
if(n<=patient&&n!=0){
cout<<"\n Details : ";
cout<<"\n Your number = "<<n;
cout<<"\n Your name = "<<book[n-1].name;
cout<<"\n Your age = "<<book[n-1].age;
cout<<"\n Your phone number = "<<book[n-1].phone;
cout<<"\n The day = "<<day(n);
cout<<"\n The time = "<<time(n);
cout<<"\n "<<"\n Thank you for registering here hope you get well soon!"<<"\n"<<"\n"<<"\n";}
else{cout<<"\n Sorry there is no patient with this number here !";
cout<<"\n Try registering first"<<"\n";}}
int input_check(int x)
{while (x!=1&&x!=3&&x!=2){
cout<<"Invalid choice try again !"<<"\n"<<"Enter your choice = ";
cin>>x;}
return x;}
int main()
{int x,t;
cout<<"\n"<<"**********Welcome To Our Medical Appointment Registration System********** "<<"\n 1- Find an appointment "<<"\n 2- Inquire about your appointment "<<"\n 3- Exit"<<"\n"<<" Enter your choice = ";
cin>>x;
x=input_check(x);
while(x==1||x==2){
while(x==1){ if(patient<=maximum){
input();
check();
print_details();}
else{cout<<"\n Sorry we all booked for this week !"<<"\n Try again next week";x=0;break;}
cout<<"\n"<<"**********Welcome To Our Medical Appointment Registration System********** "<<"\n 1- Find an appointment "<<"\n 2- Inquire about your appointment "<<"\n 3- Exit"<<"\n"<<" Enter your choice = ";
cin>>x;
x=input_check(x);}
while(x==2)
{t=inquir_1();
if(t==0){x=3;
break;}
if(t==1){
cout<<"\n"<<"**********Welcome To Our Medical Appointment Registration System********** "<<"\n 1- Find an appointment "<<"\n 2- Inquire about your appointment "<<"\n 3- Exit"<<"\n"<<" Enter your choice = ";
cin>>x;
x=input_check(x);}
if(t==3||x==2)
{inquir_2();
cout<<"\n"<<"**********Welcome To Our Medical Appointment Registration System********** "<<"\n 1- Find an appointment "<<"\n 2- Inquire about your appointment "<<"\n 3- Exit"<<"\n"<<" Enter your choice = ";
cin>>x;
x=input_check(x);}}}
if(x==3)
{cout<<"\n Thanks for using our system "<<"\n Hope you get well soon !";}}
