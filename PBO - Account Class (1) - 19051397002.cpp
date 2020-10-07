#include <iostream>
#include <string>

using namespace std;
class Account
{
 public:
  Account( int);
  void credit(int );
  void debit(int );
  int getaccountBalance();
 private:
  int accountBalance;
};
Account::Account( int balance)
{
 if(balance>=0)
  accountBalance=balance;
 else
 {
  accountBalance=0;
  cout<<"Saldo awal tidak valid."<<endl;
 }
}
void Account::credit( int balance)
{
 accountBalance = accountBalance + balance;
}
void Account::debit( int balance)
{
 if(accountBalance>=balance)
 {
  accountBalance = accountBalance - balance;
 }
 else
 {
  cout<<"Jumlah debit melebihi saldo akun."<<endl;
 }
}
int Account::getaccountBalance()
{
 return accountBalance;
}
int main ()
{
	// membuat dua objek akun
	Account account1(105);
	Account account2(-55);
	
	// menampilkan saldo awal
	cout << "Saldo Akun-1 adalah " << account1.getaccountBalance() << endl;
	cout << "Saldo Akun-2 adalah " << account2.getaccountBalance() << endl << endl;
	
	
	// kreditkan sejumlah dana
	cout << "Mengkredikan 85 ke Akun-1" << endl;
	account1.credit(85);
	cout << "Saldo Akun-1 sekarang adalah " << account1.getaccountBalance() << endl << endl;
	
	cout << "Mengkreditkan 78 ke Akun-2" << endl;
	account2.credit(78);
	cout << "Saldo Akun-2 sekarang adalah " << account2.getaccountBalance() << endl << endl;
	
	// debitkan sejumlah dana
	cout << "Mendebitkan 25 dari Akun-1" << endl;
	account1.debit(25);
	cout << "Saldo Akun-1 sekarang adalah " << account1.getaccountBalance() << endl << endl;
	
	cout << "Mendebitkan 78 dari Akun-2" << endl;
	account2.debit(78);
	cout << "Saldo Akun-2 sekarang adalah " << account2.getaccountBalance() << endl << endl;	
	
}
