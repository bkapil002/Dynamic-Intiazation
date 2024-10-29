#include<iostream>
using namespace std;

class BankDeposit{
    int Principle;
    int Year;
    float intrestRata;
    float returnRate;

    public:

    BankDeposit(int p , int y , float i);
    BankDeposit(int p , int y , int i );
     
     void soluction();

};

BankDeposit::BankDeposit(int p , int y , float i){
     Principle = p;
     Year = y;
     intrestRata = i;
      returnRate = Principle;

      for(int i=0; i < y; i++){
        returnRate = returnRate * (1+intrestRata);
      }
};

BankDeposit::BankDeposit(int p , int y , int i){
    Principle = p;
    Year = y;
    intrestRata = float(i)/100;
    returnRate = Principle;
     
     for(int i=0; i < y; i++){
        returnRate = returnRate * (1+intrestRata);
     }
};

void BankDeposit::soluction(){
    cout<<"Priciple amount "<<Principle<<" Return Value "<<Year<<" year is "<<returnRate<<endl;
}

int main(){
    int p , y;
    float i;
    int R;

    cout<<"Enter the value of p, y, and interest rate (in percentage):";
    cin>>p>>y>>i;

    BankDeposit bd1( p , y , i/100);
    bd1.soluction();
    
    cout<<"Enter the value of p, y, and interest rate (in percentage):"<<endl;
    cin>>p>>y>>R;

    BankDeposit bd2(p , y , R);
    bd2.soluction();
    
    return 0;
};