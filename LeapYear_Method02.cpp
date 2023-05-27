#include <iostream>
#include <cmath>
float  leap(int year);
using namespace std;

main(){
   int year;
   string result;
    cout<<"Enter the year=";
    cin>>year;
    result=leap(year);
    

    
}

 float leap(int year){
     float ans;
if(year%4==0 && year%100==0 && year%400==0){
        cout<<"leap year";}

else if(year%4==0 && year%100!=0){
    cout<<"LEAP YEAR";

}
else if(year%4==0 && year%100==0 && year%400!=0){
    cout<<"not a leap year";

}
else if (year%4!=0){
    cout<<"not a leap year";
}   
return ans; 
}