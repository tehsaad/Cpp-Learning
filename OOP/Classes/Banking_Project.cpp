//Banking System

#include <iostream>
using namespace std;

class Account{
public:
   Account(int id){
        ID = id;}
    string name;
    double balance;
    int ID;

    void Menu(){
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
    }
};

int AccValid();
void Status(Account &acc){
    cout << "Account ID: " << acc.ID << endl;
    cout << "Account Name: " << acc.name << endl;
    cout << "Account Current Balance: " << acc.balance << endl;
}
int main(){
    
    int id = AccValid();
    Account acc(id);
    acc.Menu();
    int choice;
    cin >> choice;
    switch(choice){
        case 1:
            cout << "Enter Amount to Deposit" << endl;
            double dep;
            cin >> dep;
            acc.balance += dep;
            Status(acc);
            break;
        case 2:
            cout << "Enter Amount to Withdraw" << endl;
            double withdraw;
            cin >> withdraw;
            if(withdraw > acc.balance){
                cout << "Insufficient Balance" << endl;
                Status(acc);
                break;
            }
            acc.balance -= withdraw;
            Status(acc);
            break;
        case 3:
            Status(acc);
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
    }
    return 0;
}

int AccValid(){
    cout << "Enter Account ID" << endl;
    int id;
    cin  >> id ;
    cout << "Enter Passkey" << endl;    //Validate ID Pass Baisc Project
    return id;
}