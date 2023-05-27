#include <iostream>
#include <cmath>
using namespace std;
void leap();
main(){
leap();
}
void leap(){
    int year;
    cout<<"Enter the year=";
    cin>>year;
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
}
