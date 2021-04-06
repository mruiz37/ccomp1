
#include <iostream>
//#include "Account.h"
#include "3-9.h"

using namespace std;

 int main()
 {
  Account account1{"Jane Green", 50};
  Account account2{"John Blue", -7};


 // display initial balance of each object
 cout << "cuenta1: " << account1.getBalance() << " Saldo es $";
 cout << "\ncuenta2: " << account2.getBalance() << " Saldo es $";

 cout << "\n\nIngrese monto a depositar para cuenta1: "; // prompt
 int depositAmount;
 cin >> depositAmount; // obtain user input
 cout << "agregando " << depositAmount << " al saldo de cuenta1";
 account1.deposit(depositAmount);


 // display balances
 cout << "\n\ncuenta1: " << account1.getName() << " saldo es $"
 << account1.getBalance();
 cout << "\ncuenta2: " << account2.getName() << " saldo  is $"
 << account2.getBalance();

 cout << "\n\nIngreso monto a depositar para cuenta2: "; // prompt
 cin >> depositAmount; // obtain user input
 
 cout << "agregando " << depositAmount << " al saldo de cuenta2";
 account2.deposit(depositAmount);

 // display balances
 cout << "\n\ncuenta1: " << account1.getName() << " saldo es $"
 << account1.getBalance();
 cout << "\ncuenta2: " << account2.getName() << " saldo es  $"
 << account2.getBalance() << endl;


//haciendo los retiros
 cout << "\n\nIngrese monto a retirar para cuenta1: "; // prompt
 int montodeRetiro;
 cin >> montodeRetiro; // obtain user input
 cout << "retirando " << montodeRetiro << " al saldo de cuenta1";
 account1.withdraw(montodeRetiro);

 cout << "\n\nIngrese monto a retirar para cuenta2: "; // prompt
 cin >> montodeRetiro; // obtain user input
 cout << "retirando " << montodeRetiro << " al saldo de cuenta2";
 account2.withdraw(montodeRetiro);

  // display balances
 cout << "\n\ncuenta1: " << account1.getName() << " saldo es $"
 << account1.getBalance();
 cout << "\ncuenta2: " << account2.getName() << " saldo es  $"
 << account2.getBalance() << endl;

 }