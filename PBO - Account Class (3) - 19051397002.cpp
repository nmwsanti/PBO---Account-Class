#include<iostream>
#include <string>
using namespace std;

class Invoice
{
 public:
  Invoice( string, string, int, int );
  void setPartNumber( string );
  string getPartNumber();
  void setPartDescription(string);
  string getPartDescription();
  void setItemQuantity(int);
  int getItemQuantity();
  void setItemPrice(int);
  int getItemPrice();
  int getInvoiceAmount();
 private:
  string partNumber;
  string partDescription;
  int itemQuantity;
  int itemPrice;
};
Invoice::Invoice( string number, string description, int quantity, int price )
{
 partNumber=number;
 partDescription=description;
 if(quantity>0)
  itemQuantity=quantity;
 else
 {
  itemQuantity=0;
  cout<<"Kuantitas awal tidak valid."<<endl;
 }
 if(price>0)
  itemPrice=price;
 else
 {
  itemPrice=0;
  cout<<"Harga awal tidak valid."<<endl;
 }
}
void Invoice::setPartNumber( string number)
{
 if ( number.length() <= 25 )
  partNumber = number;
 if ( number.length() > 25 )
 {
  partNumber = number.substr( 0, 25 );
  cout << "Name \"" << number <<"\" exceeds maximum length (25).\n"<< "Limiting partNumber to first 25 characters.\n" << endl;
 }
}
void Invoice::setPartDescription(string description )
{
 if ( description.length() <= 25 )
  partDescription = description;
 if ( description.length() > 25 )
 {
  partDescription = description.substr( 0, 25 );
  cout << "Name \"" << description <<"\" exceeds maximum length (25).\n"<< "Limiting partDescription to first 25 characters.\n" << endl;
 }
}
void Invoice::setItemQuantity(int quantity )
{
 if(quantity>0)
  itemQuantity=quantity;
 else
 {
  itemQuantity=0;
  cout<<"Kuantitas awal tidak valid."<<endl;
 }
}
void Invoice::setItemPrice(int price )
{
 if(price>0)
  itemPrice=price;
 else
 {
  itemPrice=0;
  cout<<"Harga awal tidak valid."<<endl;
 }
}
string Invoice::getPartNumber()
{
 return partNumber;
}
string Invoice::getPartDescription()
{
 return partDescription;
}
int Invoice::getItemQuantity()
{
 return itemQuantity;
}
int Invoice::getItemPrice()
{
 return itemPrice;
}
int Invoice::getInvoiceAmount()
{
 return itemQuantity*itemPrice;
}
int main()
{
 Invoice Invoice1("mtr89","Meteran",15,17000);
 Invoice Invoice2("plu74","Palu",10,20000);
 cout << "Nomor bagian awal Tagihan-1 adalah: "<< Invoice1.getPartNumber()<< "\n dan deskripsi bagian adalah "<< Invoice1.getPartDescription()<<endl;
 cout<< "Jumlah per item adalah "<< Invoice1.getItemQuantity()<< "\n harga per item adalah "<< Invoice1.getItemPrice()<< endl;
 cout<<"Jumlah total Tagihan-1 adalah "<<Invoice1.getInvoiceAmount()<<endl<<endl;
 cout << "Nomor bagian awal Tagihan-2 adalah "<< Invoice2.getPartNumber()<< "\n dan deskripsi bagian adalah "<< Invoice2.getPartDescription()<<endl;
 cout<< "Jumlah per item adalah "<< Invoice2.getItemQuantity()<< "\n harga per item adalah "<< Invoice2.getItemPrice()<< endl;
 cout<<"Jumlah total Tagihan-2 adalah "<<Invoice2.getInvoiceAmount()<<endl;
}


