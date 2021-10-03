#include<iostream>

using namespace std;

void ShowMenu() {
    cout << " * * * * * * * * * * M E N U * * * * * * * * * * " << endl<<endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit " << endl;
    cout << " * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
}
int main(){

    //check the balance , deposit money , withdraw money , show menu
    int Option;
    double balance = 500;
    do{

    ShowMenu();
    cout<< "Please choose an Option :";
    cin>>Option;

    system("cls");
    
    switch (Option)
    {
    case 1:
        cout<<"Balance is : Rs" << balance << endl;
        break;

    case 2:
        cout<<"Deopsit Amount : ";
        double DepositAmount;
        cin >> DepositAmount ;
        balance += DepositAmount ;
        break;

    case 3:
        cout<<"Withdraw Amount : " ;
        double WithdrawAmount ;
        cin >> WithdrawAmount ;
        if(WithdrawAmount > balance){
            cout<<"Unable to Withdraw , Not enough money !" << endl;
        }
        else{
            balance -= WithdrawAmount ;
        }
        break;
    }
    }
    while(Option!=4);


    system("pause>0");
}