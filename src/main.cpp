#include<bits/stdc++.h>
#include "Bank.h"
using namespace std;


int main()
{
    Bank b;
    Account acc;
    int choice;
    string fname, lname;
    long accountNumber;
    float balance;
    float amount;
    system("cls");
	cout << "\n******************************************************************\n";
	cout << "                            BANKING SYSTEM                          \n";
	cout << "\n******************************************************************\n\n";
    do
    {
        cout << "\n\tSelect one option below : "<<endl;
        cout << "\n\t1. Open an Account";
        cout << "\n\t2. Balance Enquiry";
        cout << "\n\t3. Deposit Amount";
        cout << "\n\t4. Withdraw Amount";
        cout << "\n\t5. Close an Account";
        cout << "\n\t6. Show All Accounts";
        cout << "\n\t7. Quit";
        cout << "\n\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter First Name : ";
            cin >> fname;
            cout << "Enter Last Name : ";
            cin >> lname;
            cout << "Enter initial Balance : ";
            cin >> balance;
            acc = b.OpenAccount(fname, lname, balance);
            cout << endl
                 << "\nCongratulation Account is Created!!\n" << endl;
            cout << acc;
            break;
        case 2:
            cout << "\nEnter Account Number : ";
            cin >> accountNumber;
            acc = b.BalanceEnquiry(accountNumber);
            cout << endl
                 << "Your Account Details " << endl;
            cout << acc;
            break;
        case 3:
            cout << "Enter Account Number : ";
            cin >> accountNumber;
            cout << "Enter Balance :";
            cin >> amount;
            acc = b.Deposit(accountNumber, amount);
            cout << endl
                 << "Amount is Deposited" << endl;
            cout << acc;
            break;
        case 4:
            cout << "Enter Account Number : ";
            cin >> accountNumber;
            cout << "Enter Balance : ";
            cin >> amount;
            acc = b.Withdraw(accountNumber, amount);
            cout << endl
                 << "Amount Withdrawn" << endl;
            cout << acc;
            break;
        case 5:
            cout << "Enter Account Number : ";
            cin >> accountNumber;
            b.CloseAccount(accountNumber);
            cout << endl
                 << "Account is Closed" << endl;
            cout << acc;
        case 6:
            b.ShowAllAccounts();
            break;
        case 7:
            break;
        default:
            cout << "\nEnter Corret Choice : ";
            exit(0);
        }
    } while (choice != 7);

    return 0;
}