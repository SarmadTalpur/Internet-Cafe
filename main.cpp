#include <iostream>
using namespace std;
int main () {
int h1,m1,s1,h2,m2,s2,h,m,s;
cout<<"Enter the starting time in 24-hour format: \n";
cout<<"Hours: "; cin>>h1;
cout<<"Minutes: "; cin>>m1;
cout<<"Seconds: "; cin>>s1;
cout<<"Enter the ending time in 24-hour format: \n";
cout<<"Hours: "; cin>>h2;
cout<<"Minutes: "; cin>>m2;
cout<<"Seconds: "; cin>>s2;
if (h1==h2)
cout<<"Client has used the service for 1 Hours\n" <<"Client is charged Rs.20";
else if (h1!=h2)
{
h=h2-h1;
m=m2-m1;
s=s2-s1;
if (h==1 && m>0) {
cout<<"Client has used the service for 2 Hours\n";
cout<<"Client is charged Rs. 15"; }
else if (h>1 && m>0) {
cout<<"Client has used the service for " <<h+1 <<"Hours\n";
cout<<"Client is charged Rs. " <<(h+1)*10; }
else if (h==1 && s>0 && m==0) {
cout<<"Client has used the service for 2 Hours\n";
cout<<"Client is charged Rs. 15"; }
else if (h>1 && s>0 && m==0) {
cout<<"Client has used the service for " <<h+1 <<" Hours\n";
cout<<"Client is charged Rs. " <<(h+1)*10; }
else if (h==1 && m<=0) {
cout<<"Client has used the service for 1 Hours\n";
cout<<"Client is charged Rs. 20"; }
else if (h==2 && m<=0) {
cout<<"Client has used the service for 2 Hours\n";
cout<<"Client is charged Rs. 15"; }
else if (h>2 && m<=0) {
cout<<"Client has used the service for " <<h <<" Hours\n";
cout<<"Client is charged Rs. " <<h*10; }
}
return 0;
}
