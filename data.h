#include <iostream>
#include <string>
#include <map>
#include <bits/stdc++.h>
using namespace std;

//ambil waktu 
time_t sec = time(0);
string tim = ctime(&sec);

//variabel input
int inpTipe, merek;
char confirm;
 map<string, string> client{ 
 		{ "name", "" },
   		{ "address", "" }, 
   		{ "telp", "" }
   };
   map<string, string>::iterator i;

map<string, string> order{ 
    { "merek", "" },
      { "tglPeminjaman", "" }, 
      { "tglKembali", "" },
      { "tenggat", ""},
      { "biaya", ""}
   };
   map<string, string>::iterator j;


//variabel data
   int selisih;
string katalogMotor[] = {
  "Yamaha X-Ride 125",
  "Honda BeAT FI",
  "Honda Scoopy FI",
  "Honda Vario 150 eSP",
  "Yamaha Mio J"
};
string katalogMobil[] = {
  "Mercedez benz", 
  "Daihatsu Xenia",
  "Honda All New City",
  "Toyota Avanza", 
  "Daihatsu Sirion", 
};
int hargaMobilPerHari[] = {
  800000,
  200000,
  500000,
  300000,
  600000
};
int hargaMotorPerHari[] = {
  200000,
  100000,
  150000,
  300000,
  100000
};
