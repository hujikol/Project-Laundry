#include <iostream>
#include <windows.h>
#include <fstream>
#include <string.h>
#include <ctime>
using namespace std;
ifstream ambil;
ofstream simpan;
int banyakdata=0;
typedef struct{
	string nama,kode;
	int layanan, lama;
	float berat, harga;	
}pelanggan;
pelanggan datapelanggan[100];
string username,pass,n_file;
char choose,bersihkan;
int pilih,tambahdata,pilout,unik,log;
string carifile;
void ambil_data(){
	int j=0,a=0;
	string hapus;
	if(a==0){
		cout<<"Nama file yang akan diambil : ";cin>>carifile;
		a+=1;
	}
ifstream ambil(carifile.c_str());
	for(int i=0;i<3;i++){
		ambil>>datapelanggan[i].nama;
		if(ambil.eof())
		break;
		ambil>>datapelanggan[i].layanan;
		ambil>>datapelanggan[i].lama;
		ambil>>datapelanggan[i].berat;
		ambil>>datapelanggan[i].harga;
		ambil>>datapelanggan[i].kode;
		getline(ambil,hapus);
		banyakdata=banyakdata+1;
	}
	//ini seharusnya (i<banyak) lha variabel banyak perlu ditangani
	for (int i=0;i<3;i++){
	cout<<datapelanggan[i].nama<<endl;
	cout<<datapelanggan[i].layanan<<endl;
	cout<<datapelanggan[i].lama<<endl;
	cout<<datapelanggan[i].berat<<endl;
	cout<<datapelanggan[i].harga<<endl;
	cout<<datapelanggan[i].kode<<endl;
	}ambil.close();
}

void login (){
	do{
	cout << "User     = ";
		cin >> username;
	cout<< "Password = ";
		cin >> pass;
		if(username=="admin"&& pass=="sukses")
			cout<<"Berhasil login"<<endl;
		else{
			cout<<"ada yang salah"<<endl;
		}
	}while (username!="admin"|| pass!="sukses"); 
}

string randomString(int maxLength = 5, string charIndex = "abcdefghijklmnaoqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890")
{
    int length = rand() % maxLength + 2;
    int indexesOfRandomChars[15];
    for (int i = 0; i < length; ++i)
        indexesOfRandomChars[i] = rand() % charIndex.length();
    string randomString = "";
    for (int i = 0; i < length; ++i){
        randomString += charIndex[indexesOfRandomChars[i]];
    } 
    return randomString;
}

void kode(string *ke){
int a;
string jajal;
    srand(time(NULL));
    while(a!=5){
		jajal=randomString();
    	a=jajal.length();}
	if(a==5){
		cout<<"\n	Kode Unik Anda = "<<jajal<<"	(Harap simpan baik\" nanti untuk pengambilan)\n";
	}
	*ke=jajal;
}

void input(){
	int bnyk_data;
	cout<<"Input data Menu"<<endl;
	cout<<"Masukkan nama file = ";
	cin>>n_file; 
	cout<<"Banyak data = ";
	cin>>bnyk_data;banyakdata+=bnyk_data;
		string oke[banyakdata];
	for(int i = 0;i<banyakdata;i++){
		cout<<endl<<i+1<<"	"<<"Nama = ";
		cin>>datapelanggan[i].nama;
		cout<<"	Pilih layanan"<<endl;
		cout<<"		1.Clean & Clear"<<endl<<"		2.Cuci & Keringkan"<<endl;
		cout<<"		3.Setrika"<<endl;
		cout<<"		Pil(1-3) = ";
			cin>>datapelanggan[i].layanan;
		cout<<"	Lama Laundry"<<endl;
		cout<<"		1.Reguler (3 hari)"<<endl<<"		2.One Day service"<<endl;
		cout<<"		3.Super Kilat"<<endl;
		cout<<"		Pil(1-3) = ";
			cin>>datapelanggan[i].lama;
		cout<<"	Masukkan berat cucian"<<endl;
		int y=0;
		while(y<3){
		cout<<"	ALERT!!!!!!"<<endl;
		y++;}
		cout<<"	*Jika Berat <2Kg, hitungan akan sama dengan 2kg";
		cout<<"	\n	Masukkan berat laundry= ";
			cin>>datapelanggan[i].berat;
				if(datapelanggan[i].berat<2){
				datapelanggan[i].berat=2;
				}
	cout<<"\n	Total biaya yang harus dibayar : Rp ";
		if(datapelanggan[i].layanan==1 && datapelanggan[i].lama==1){
			datapelanggan[i].harga=datapelanggan[i].berat*4500;
			cout<<datapelanggan[i].harga;
		}
		else if(datapelanggan[i].layanan==1 && datapelanggan[i].lama==2){
			datapelanggan[i].harga=datapelanggan[i].berat*6000;
			cout<<datapelanggan[i].harga;
		}
			else if(datapelanggan[i].layanan==1 && datapelanggan[i].lama==3){
				datapelanggan[i].harga=datapelanggan[i].berat*8000;
				cout<<datapelanggan[i].harga;
			}
				else if(datapelanggan[i].layanan==2 && datapelanggan[i].lama==1){
					datapelanggan[i].harga=datapelanggan[i].berat*3500;
					cout<<datapelanggan[i].harga;
				}
					else if(datapelanggan[i].layanan==2 && datapelanggan[i].lama==2){
						datapelanggan[i].harga=datapelanggan[i].berat*5000;
						cout<<datapelanggan[i].harga;
					}
						else if(datapelanggan[i].layanan==2 && datapelanggan[i].lama==3){
							datapelanggan[i].harga=datapelanggan[i].berat*7000;
							cout<<datapelanggan[i].harga;
						}
							else if(datapelanggan[i].layanan==3 && datapelanggan[i].lama==1){
								datapelanggan[i].harga=datapelanggan[i].berat*1500;
								cout<<datapelanggan[i].harga;
							}
								else if(datapelanggan[i].layanan==3 && datapelanggan[i].lama==2){
									datapelanggan[i].harga=datapelanggan[i].berat*2000;
									cout<<datapelanggan[i].harga;
								}
									else if(datapelanggan[i].layanan==3 && datapelanggan[i].lama==3){
										datapelanggan[i].harga=datapelanggan[i].berat*3000;
										cout<<datapelanggan[i].harga;
									}
										else 
											cout<<"Ada input yang salah";

	kode(&oke[i]);
		simpan.open(n_file.c_str(),ios::app);
		simpan<<datapelanggan[i].nama<<endl<<datapelanggan[i].layanan<<endl<<datapelanggan[i].lama<<endl
			  <<datapelanggan[i].berat<<endl<<datapelanggan[i].harga<<endl<<oke[i]<<endl;
		simpan.close();
		
	}
}

void ngesort(){
	ambil_data();
	int pilihansort;
	string tempnama,tempkode;
	int templama,templayanan;
	float tempberat,tempharga;
	cout<<"Menu Sorting/Mengurutkan data"<<endl;
	cout<<"Pilih yang hendak di sorting"<<endl;
		cout<<"	1.Nama Pelanggan"<<endl;
		cout<<"	2.Berat"<<endl;
	cout<<"Pil : ";cin>>pilihansort;
	switch(pilihansort){
		case 1 : 
			cout<<"Bubble sort dengan nama pelanggan"<<endl;
			for (int i = 0; i < banyakdata-1; i++)
						{
							for (int j = 0; j <(banyakdata-1-i);j++)
							{
								if (datapelanggan[j].nama>datapelanggan[j+1].nama)
								{
									tempnama=datapelanggan[j].nama;
									templayanan=datapelanggan[j].layanan;
									templama=datapelanggan[j].lama;
									tempberat=datapelanggan[j].berat;
									tempharga=datapelanggan[j].harga;
									tempkode=datapelanggan[j].kode;
									
									datapelanggan[j].nama=datapelanggan[j+1].nama;
									datapelanggan[j].layanan=datapelanggan[j+1].layanan;
									datapelanggan[j].lama=datapelanggan[j+1].lama;
									datapelanggan[j].berat=datapelanggan[j+1].berat;
									datapelanggan[j].harga=datapelanggan[j+1].harga;
									datapelanggan[j].kode=datapelanggan[j+1].kode;
									
									datapelanggan[j+1].nama=tempnama;
									datapelanggan[j+1].layanan=templayanan;
									datapelanggan[j+1].lama=templama;
									datapelanggan[j+1].berat=tempberat;
									datapelanggan[j+1].harga=tempharga;
									datapelanggan[j+1].kode=tempkode;
								}
							}
						}
									
									
			
		break;
		case 2 :
			cout<<"Straight Insertion Sort mengurutkan berat laundry pelanggan"<<endl;
			for(int i=1;i<banyakdata;i++){
				tempnama=datapelanggan[i].nama;
				templayanan=datapelanggan[i].layanan;
				templama=datapelanggan[i].lama;
				tempberat=datapelanggan[i].berat;
				tempharga=datapelanggan[i].harga;
//				tempkode=datapelanggan[i].kode;
				int k=i-1;
				while((tempberat>datapelanggan[k].berat) && (k>=0)){
					datapelanggan[k+1].nama=datapelanggan[k].nama;
					datapelanggan[k+1].layanan=datapelanggan[k].layanan;
					datapelanggan[k+1].lama=datapelanggan[k].lama;
					datapelanggan[k+1].berat=datapelanggan[k].berat;
					datapelanggan[k+1].harga=datapelanggan[k].harga;
//					datapelanggan[k+1].kode=datapelanggan[i].kode;
					k=k-1;
						datapelanggan[k+1].nama=tempnama;
						datapelanggan[k+1].layanan=templayanan;
						datapelanggan[k+1].lama=templama;
						datapelanggan[k+1].berat=tempberat;
						datapelanggan[k+1].harga=tempharga;
						datapelanggan[k+1].kode=tempkode;
				}
			}
		break;
	}
}

void output(){
	string unik,nama; int posisi,k,pilih;
	bool ketemu;
	ketemu=false;
	system("CLS");
	cout<<"====================================================================\n"
		<<"============================ Menu Output ===========================\n"
		<<"====================================================================\n";
	ambil_data();
	cout<<"\n1. Tampilkan Semua Data\n"<<"2. Tampilkan Data Pilihan\n";
	cout<<"Pilihan : ";
	cin>>pilout;
		switch(pilout){
			case 1:
				for(int i=0;i<banyakdata;i++){
					cout<<i+1<<".	Nama = "<<datapelanggan[i].nama<<endl;
					cout<<"	Pesanan dan Layanan\n";
						if(datapelanggan[i].layanan==1){
							cout<<"		Clean & Clear";
						}
						else if(datapelanggan[i].layanan==2){
							cout<<"		Cuci & Keringkan";
						}
						else if(datapelanggan[i].layanan==3){
							cout<<"		Setrika";
						}
						else {
							cout<<"	Layanan Tidak diketahui";
						}
	
						if(datapelanggan[i].lama==1){
							cout<<", Reguler (3 Hari)"<<endl;
						}
						else if(datapelanggan[i].lama==2){
							cout<<", One Day Service"<<endl;
						}
						else if(datapelanggan[i].lama==3){
							cout<<", Super Kilat"<<endl;
						}
						else {
							cout<<", Laundry Tidak akan selesai"<<endl;
						}
					cout<<"	Berat laundry = "<<datapelanggan[i].berat<<" Kg"<<endl;
					cout<<"	Total Bayar = Rp "<<datapelanggan[i].harga<<"-,\n";
					cout<<"	Kode UNIK = "<<datapelanggan[i].kode<<endl;
				}
			break;
			
			case 2: cout<<"\nMencari berdasarkan apa?\n1. Nama\n2. Kode Unik\nPilihan";cin>>pilih;
				if(pilih==1){
					cout<<"-----------------------------------------------\n";
					cout<<"Masukan nama yang dicari : ";cin.ignore();getline(cin,nama);
					cout<<"-----------------------------------------------\n";
					for (int i = 0; i <k ; i++){
						if (datapelanggan[i].nama==nama){ 
							k=k+1;
						}
					}
					if (k==0){
						cout<<"Nama yang anda cari tidak ada dalam data sensus";
						cout<<"\n-----------------------------------------------\n";
					}

				}
				else if(pilih==2){cout<<"Masukkan Kode UNIK = ";
				cin.ignore();getline(cin,unik);
				for(k=0;k<3;k++){
					if(unik==datapelanggan[k].kode){
					posisi=k;
					}
				}
					cout<<"	Data Saudara "<<datapelanggan[k].nama<<endl;
					cout<<"	Pesanan dan Layanan\n";
						if(datapelanggan[k].layanan==1){
							cout<<"		Clean & Clear";
						}
						else if(datapelanggan[k].layanan==2){
							cout<<"		Cuci & Keringkan";
						}
						else if(datapelanggan[k].layanan==3){
							cout<<"		Setrika";
						}
						else {
							cout<<"	Layanan Tidak diketahui";
						}
	
						if(datapelanggan[k].lama==1){
							cout<<", Reguler (3 Hari)"<<endl;
						}
						else if(datapelanggan[k].lama==2){
							cout<<", One Day Service"<<endl;
						}
						else if(datapelanggan[k].lama==3){
							cout<<", Super Kilat"<<endl;
						}
						else {
							cout<<", Laundry Tidak akan selesai"<<endl;
						}
					cout<<"	Berat laundry = "<<datapelanggan[k].berat<<" Kg"<<endl;
					cout<<"	Total Bayar = Rp "<<datapelanggan[k].harga<<"-,\n";
					cout<<"	Kode UNIK = "<<datapelanggan[k].kode<<endl;
				}
			break;
			
			default: cout<<"Input Salah!";break;
		char x;
		cout<<"Cek Lagi ? (y/n) ";
		cin>>x;
		if(x=='y')
			output();	
	}
}

int main(){

	if(log==0){
	cout<<"=====================================================================\n"
		<<"====================== Welcome to Nagi Laundry ======================\n"
		<<"=====================================================================\n"
		<<"\nPlease login"<<endl;
	login();log+=1;}
	
system("CLS");
	cout<<"=====================================================================\n"
		<<"======================== Welcome to Main Menu =======================\n"
		<<"=====================================================================\n"
		<<"Choose what you want to do next";
	cout<<"\n1. Input data\n2. Check data\n3. Sorting\n4. Exit\nWhat you want to do next = ";
	cin>>pilih;
		switch (pilih){
		case 1 :
			input();
		break;
		case 2 :
			output();
		break;
		case 3:
			ngesort();
		break;
		case 4:
			cout<<"============================ Terima Kasih ============================";
			return 0;
		break;
		default:
			cout<<"Input salah";
		}
		cout<<"	Back to menu ?(y/n) = ";
			cin>>choose;
				system("CLS");
		if(choose=='y'||choose=='Y')main();
	
}
