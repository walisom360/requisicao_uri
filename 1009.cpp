#include <iostream>
#include <string>
using namespace std;
#include<iomanip>


int main(){
    
    string vendedor;
    double s1,st,result,total;
    cin >> vendedor;
    cout << fixed << setprecision(2);
    cin>>s1;
    cin>>st;
    
    result=st*15/100;
    
    
    
    total=s1+result;
   
    
    cout<<"TOTAL = R$ "<< fixed << std::setprecision(2) << total <<endl;
}
