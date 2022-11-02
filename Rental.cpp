#include<iostream>
#include<windows.h>
#include<thread>
#include<chrono>
#include<string>
#include<stdlib.h>
#include <sstream>
#include <locale>
/*
@author 
  Afta 
  Ziyyan 
  Adinni
*/
using namespace std;

#include "data.h"

struct dotted : std::numpunct<char> {
    char do_thousands_sep()   const { return '.'; }  // separate with dots
    std::string do_grouping() const { return "\3"; } // groups of 3 digits
    static void imbue(std::ostream &os) {
      os.imbue(std::locale(os.getloc(), new dotted));
    }
};

void delay(int x = 5, int y = 1) {
	if (y != 1) {
      for(int j = 0; j < x; ++j){
        system("cls");
        cout << "Memulai Ulang";
        for (int i = 0; i < 10; ++i)
        {
          cout << ".";
          this_thread::sleep_for(chrono::milliseconds(3));
        }
       //this_thread::sleep_for(chrono::seconds(1)); 
      }
		
	}
	for (int i = x; i > 0; --i) {
		//cout << i << endl;
		this_thread::sleep_for(chrono::milliseconds(1));
	}
}

void restart();

void banner(int x = 3){
  if(x == 2){
    system("cls");
    cout << "	                   . ---- .~\\<|         " << endl;
		cout << "   /~ ~ ~ ~\\-------/        |~\\          " << endl;
  	cout << "  |_.------.______/_\\______/ / \\ _ _     " << endl;
  	cout << "  /   - -// \\    /[_]={==}=\\/  /\\- --\\    " << endl;         
  	cout << "   /   _// \\ \\__/  O  |==| /  // \\--   \\  " << endl;         
  	cout << "  |  | *-|--|-\\ ( )*__(  )/   |  | * |  | " << endl;
  	cout << "   \\   -  ~/~ ~ ~      ~~      \\   -   /  " << endl;
  	cout << "      - -                         - -     " << endl;
  	cout << "==========================================" << endl;
  	cout << "  ____,       ____, ____,_,  _,____,____,__,   " << endl;
    cout << "(-|_,  ____,(-|__)(-|_,(-|\\ |(-|  (-/_|(-|    " << endl;
    cout << " _|__,(      _|  \\,_|__,_| \\|,_|, _/  |,_|__," << endl;
    cout << "(           (     (    (     (   (     (      " << endl;
    cout << "==============================================" << endl;
    cout << "            Welcome To Dashboard              " << endl;
    cout << "          Rent Bike or Car So easy        " << endl;
    cout << "             web: e-rent.co.id                " << endl;
    cout << "             Telp: 1332-44-201                " << endl;
    cout << "==============================================" << endl;
    cout << "Login at\t      " << tim;
    cout << "==============================================" << endl;
  }else if(x == 1){
    system("cls");
    cout << "                 __________________                         " << endl;
    cout << "  						_.-'_____  _________ _`.                       " << endl;
		cout << "            .` ,'      ||         | `.`.                    " << endl;
  	cout << "          .` ,'        ||         |   `.`.                  " << endl;
  	cout << "        .`  /          ||         |  ,' ] `....___          " << endl;         
  	cout << "      _`__.'''''''''''''''''''''''`''''''''|..___ `-.._     " << endl;         
  	cout << "    .'                  [='                '     `'-.._`.   " << endl;
  	cout << " ,:/.'''''''''''''''''''|''''''''''''''''''|'''''''''''\'\\  " << endl;
  	cout << "  //||    _..._         |                  '    _..._  |)|  " << endl;
    cout << " /|//   ,',---.`.       |                  |  .',---.`.\\>|  " << endl;
    cout << "(':/   //' .-. `\\      \\_________________/  '/' .-. `\\|_) " << endl;
  	cout << " `-...'||  '-'  ||________,,,,,,,,,,,,,,,__.'||  '-'  ||-'  " << endl;
  	cout << "       '.'.___.','                           '.'.___.','    " << endl;
    cout << "         '-.m.-'                               '-.m.-'      " << endl;
    
  	cout << "======================================================" << endl;
  	cout << "  ____,       ____, ____, _,  _, ____, ____, __,   " << endl;
    cout << "(-|_,  ____,(-|__) (-|_, (-|\\ | (-|   (-/_| (-|    " << endl;
    cout << " _|__,(      _|  \\ ,_|__, _| \\|, _|,  _/  |, _|__," << endl;
    cout << "(           (     (    (     (   (     (      " << endl;
    cout << "==============================================" << endl;
    cout << "            Welcome To Dashboard              " << endl;
    cout << "          Rent Bike or Car So easy        " << endl;
    cout << "             web: e-rent.co.id                " << endl;
    cout << "             Telp: 1332-44-201                " << endl;
    cout << "==============================================" << endl;
    cout << "Login at\t      " << tim;
    cout << "==============================================" << endl;
  }else{
    system("cls");
    cout << "======================================================" << endl;
    delay(5);
  	cout << "  ____,       ____, ____, _,  _, ____, ____, __,   " << endl;
    delay(5);
    cout << "(-|_,  ____,(-|__) (-|_, (-|\\ | (-|   (-/_| (-|    " << endl;
    delay(5);
    cout << " _|__,(      _|  \\ ,_|__, _| \\|, _|,  _/  |, _|__," << endl;
    delay(5);
    cout << "(           (     (    (     (   (     (      " << endl;
    delay(5);
    cout << "=====================================================" << endl;
    delay(5);
    cout << "            Welcome To Dashboard              " << endl;
    delay(5);
    cout << "          Rent Bike or Car So easy        " << endl;
    delay(5);
    cout << "             web: e-rent.co.id                " << endl;
    delay(5);
    cout << "             Telp: 1332-44-201                " << endl;
    delay(5);
    cout << "=====================================================" << endl;
    delay(5);
    cout << "Login at\t      " << tim;
    delay(5);
    cout << "=====================================================" << endl;
  }
}

void view(){
  cout << "=======================================================" << endl;
  cout << "Name Costumer   : " << client["name"] << endl;
  cout << "Address         : " << client["address"] << endl;
  cout << "Telp            : " << client["telp"] << endl;
  cout << "=======================================================" << endl;
  cout << "Jenis Kendaraan : " << tipe << endl;
  cout << "Merek           : " << order["merek"] << endl;
  cout << "Tgl Ambil       : " << order["tglPeminjaman"] << endl;
  cout << "Tgl Kembali     : " << order["tglKembali"] << endl;
  cout << "Lama Peminjaman : " << order["tenggat"] << endl;
  cout << "Biaya per Hari  : Rp." << price << endl;
  cout << "Biaya Sewa      : " << order["biaya"] << endl;
  cout << "=======================================================" << endl;
}

int konvertSTR(string ang) {
  stringstream ss(ang);
  int x;
  ss >> x;
  return x;
}

string konvertINT(int nomor) {
  stringstream ss;
  ss << nomor;
  return ss.str();
}
void datatgl(){
  string hariPinjam = order["tglPeminjaman"];
  string hariKembali = order["tglKembali"];
  string temp1[3], temp2[3];
  string delim = "/";
  int tgl[2], bln[2], thn[2];
  int to1, to2;

  size_t pos = 0; 
  int i = 0;
  while(( pos = hariPinjam.find (delim)) != std::string::npos){
    temp1[i] = hariPinjam.substr(0, pos); // store the substring   
    hariPinjam.erase(0, pos + delim.length());  /* erase() function store the current positon and move to next token. */
    i+=1; 
    if (i == 0)
    {
      tgl[0] = konvertSTR(temp1[i]);
    }
    if (i == 1)
    {
      bln[0] = konvertSTR(temp1[i]);
    }
    if (i == 2)
      {
        temp1[i] = hariPinjam;
        thn[0] = konvertSTR(temp1[i]);
        i = 0;
      } 

  }

  while(( pos = hariKembali.find (delim)) != std::string::npos){
    temp2[i] = hariKembali.substr(0, pos); // store the substring   
    hariKembali.erase(0, pos + delim.length());  /* erase() function store the current positon and move to next token. */
    i+=1; 
    if (i == 0)
    {
      tgl[0] = konvertSTR(temp2[i]);
    }
    if (i == 1)
    {
      bln[0] = konvertSTR(temp2[i]);
    }
    if (i == 2)
      {
        temp1[i] = hariKembali;
        thn[0] = konvertSTR(temp2[i]);
        i = 0;
      } 

  }
  to1 = tgl[0] + (bln[0]*30) + (thn[0]*365);
  to2 = tgl[1] + (bln[1]*30) + (thn[1]*365);
  selisih = to2 - to1;
  order["tenggat"] = konvertINT(to1);
}

/*void datatgl(){
  //ambil selisih waktu
  string hariPinjam = order["tglPeminjaman"];
  string hariKembali = order["tglKembali"];
  string temp1, temp2;
  int Pinjam, Kembali;
  for (int i = 0; i < 2; ++i)
  {
    if (hariPinjam[0] == '0')
    {
      temp1 = hariPinjam[1];
      break;
    }
    temp1 += hariPinjam[i];
  }
  Pinjam = konvertSTR(temp1);

  for (int i = 0; i < 2; ++i)
  {
    if (hariPinjam[0] == '0')
    {
      temp2 = hariKembali[1];
      break;
    }
    temp2 += hariKembali[i];
  }
  Kembali = konvertSTR(temp2);

  selisih = Kembali - Pinjam;
  order["tenggat"] = konvertINT(selisih);
}*/

void money(){
  stringstream ss;
    dotted::imbue(ss);
  datatgl();
  int indeksHarga = merek - 1;
  if (inpTipe == 1)
  {
    Sum = selisih * hargaMobilPerHari[indeksHarga];
  } else if (inpTipe == 2)
  {
    Sum = selisih * hargaMotorPerHari[indeksHarga];
  }
  ss << Sum;
  order["biaya"] = ss.str();
  ss.str("");
}

void costumer(){
  if(client["name"].empty()){
    cout << "=====================================================" << endl;
    cout << "Name Costumer : ";
    cin >> client["name"];
    cout << "Address Costumer : ";
    cin >> client["address"];
    cout << "Telp Costumer : ";
    cin >> client["telp"];
    cout << "=====================================================" << endl;
  }else{
    cout << "=====================================================" << endl;
    cout << "Costumer" << endl;
    cout << "Name : " << client["name"] << endl;
    cout << "Address : " << client["address"] << endl;
    cout << "Telp : " << client["telp"] << endl;
    cout << "=====================================================" << endl;
  }
}

void katalog(){
  stringstream ss;
    dotted::imbue(ss);

  if(inpTipe == 1){
    //katalog mobil
    for (int i = 0; i < 5; i++){
      cout << "[" << i+1 << "]" << katalogMobil[i];
      ss << hargaMobilPerHari[i];
      cout << "\t\tRp. " << ss.str() << " /hari" << endl;
      ss.str("");
    }
  }else if(inpTipe == 2){
    //katalog motor
    for (int j = 0; j < 5; j++){
      cout << "[" << j+1 << "]" << katalogMotor[j];
      ss << hargaMotorPerHari[j];
      cout << "\t\tRp. " << ss.str() << " /hari" << endl;
      ss.str("");
    }
  }
}

void choose(){
  stringstream ss;
    dotted::imbue(ss);
  int a = merek - 1;
  if (inpTipe == 1)
  {
    //mobil
    order["merek"] = katalogMobil[a];
    tipe = "Mobil";
    ss << hargaMobilPerHari[a];
    price = ss.str();
    ss.str("");
  }else if (inpTipe == 2)
  {
    //motor
    order["merek"] = katalogMotor[a];
    tipe = "Motor";
    ss << hargaMotorPerHari[a];
    price = ss.str();
    ss.str("");
  }else{
    cout << "Error// harap isi dengan benar!!" << endl;
  }
}

void cetak(){
  stringstream ss;
    dotted::imbue(ss);
    stringstream st;
    dotted::imbue(st);
  system("cls");
  cout << "======================================================" << endl;
  cout << "  ____,       ____, ____, _,  _, ____, ____, __,   " << endl;
  cout << "(-|_,  ____,(-|__) (-|_, (-|\\ | (-|   (-/_| (-|    " << endl;
  cout << " _|__,(      _|  \\ ,_|__, _| \\|, _|,  _/  |, _|__," << endl;
  cout << "(           (     (    (     (   (     (      " << endl;
  cout << "=====================================================" << endl;
  cout << "            Thank You for Use our Service              " << endl;
  cout << "              Rent Bike or Car So easy        " << endl;
  cout << "                 web: e-rent.co.id                " << endl;
  cout << "                 Telp: 1332-44-201                " << endl;
  cout << "=====================================================" << endl;
  cout << "You have rent at\t      " << tim;
  cout << "=====================================================" << endl;  
  cout << "Nama Costumer   : " << client["name"] << endl;
  cout << "Alamat          : " << client["address"] << endl;
  cout << "Telp            : " << client["telp"] << endl;
  cout << "=======================================================" << endl;
  cout << "Jenis Kendaraan : " << tipe << endl;
  cout << "Merek           : " << order["merek"] << endl;
  cout << "Tgl Ambil       : " << order["tglPeminjaman"] << endl;
  cout << "Tgl Kembali     : " << order["tglKembali"] << endl;
  cout << "Lama Peminjaman : " << order["tenggat"] << endl;
  cout << "Biaya per Hari  : Rp." << price << endl;
  cout << "Biaya Sewa      : " << order["biaya"] << endl;
  cout << "=======================================================" << endl;
  st << pay;
  cout << "Bayar           : Rp." << st.str() << endl;
  ss << change;
  cout << "Kembalian       : Rp." << ss.str() << endl;
  cout << "=======================================================" << endl;
  cout << "    **Don't forget to return the vehicle on time**     " << endl;
}

void proses(){
  cout << "Silahkan pilih tipe kendaraan yang tersedia : ";
  cin >> merek;
  choose();
  cout << endl << "Tanggal Peminjaman (dd/mm/yyyy) : ";
  cin >> order["tglPeminjaman"];
  cout << endl << "Tanggal Kembali (dd/mm/yyyy) : ";
  cin >> order["tglKembali"];
  money();
  view();
  cout << endl << "Pay : Rp.";
  cin >> pay;
  change = pay - Sum;


  //confirm struk
  cout << "Apakah ingin di cetak struk? (y/n)" << endl;
  cout << ">";
  cin >> confirm;
  if (confirm == 'y')
  {
    cetak();
  }else{
    restart();
  }
  
}

void console(){
 
    banner();
    costumer();
    cout << "< 1 > Mobil" << endl;
    cout << "< 2 > Motor" << endl;
    cout << "Pilih Kendaraan yang ingin di sewa : ";
    cin >> inpTipe;
    if(inpTipe == 1){
      banner(1);
      costumer();
      katalog();
      proses();
    }else if(inpTipe == 2){
      banner(2);
      costumer();
      katalog();
      proses();
    }else{
      cout << "Masukkan pilihan sesuai ya..." << endl;
    }
    
    //konfirmasi 
    cout << "Mulai Ulang Program? (y/n)" << endl;
    cout << ">";
    cin >> confirm;
  
  //restart();
    if (confirm == 'y')
    {
        restart();
    }
}

