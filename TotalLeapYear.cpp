#include <iostream>
using namespace std;
float  leap_year(int year);
main(){
    int y1,y2,a,b,c,d,e,f,g,h,i,j,sum;
    cout<<"Enter the year1=";
    cin>>y1;
    cout<<"Enter the year2=";
    cin>>y2;
    a=leap_year(y1);
    b=leap_year(y1+1);
    c=leap_year(y1+2);
    d=leap_year(y1+3);
    e=leap_year(y1+4);
    f=leap_year(y1+5);
    g=leap_year(y1+6);
    h=leap_year(y1+7);
    i=leap_year(y1+8);
    j=leap_year(y1+9);
    sum=a+b+c+d+e+f+g+h+i+j;
    cout<<"the total leap years wil be"<<sum<<endl;




}
float leap_year(int year){
    if(year%4==0 && year%100==0 && year%400==0 || year%4==0 && year%100 !=0){
        return (1);}



else {
        return 0;
    }

}



