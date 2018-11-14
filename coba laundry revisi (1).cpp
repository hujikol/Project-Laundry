#include <iostream>
#include <windows.h>
using namespace std;

string username,pass,nama[250];
char kode[250],choose,bersihkan;
int code[250];
int pilih,banyakdata,layanan[300],lama[300],harga[300],tambahdata,pilout,unik;
float berat[300];

void login (){
	do{
	cout << "Masukkan Nama Admin = ";
		cin >> username;
	cout<< "Masukkan Pass = ";
		cin >> pass;
		if(username=="admin"&& pass=="sukses")
			cout<<"Berhasil login"<<endl;
		else{
			cout<<"ada yang salah"<<endl;
		}
	}while (username!="admin"|| pass!="sukses"); 
}

void input(){
	cout<<"Input data Menu"<<endl;
	cout<<"Banyak data = ";
	cin>>banyakdata;
	for(int i = 0;i<banyakdata;i++){
		cout<<i+1<<"	"<<"Nama = ";
			cin>>nama[i];
		cout<<"	Pilih layanan"<<endl;
		cout<<"		1.Clean & Clear"<<endl<<"		2.Cuci & Keringkan"<<endl;
		cout<<"		3.Setrika"<<endl;
		cout<<"		Pil(1-3) = ";
			cin>>layanan[i];
		cout<<"	Lama Laundry"<<endl;
		cout<<"		1.Reguler (3 hari)"<<endl<<"		2.One Day service"<<endl;
		cout<<"		3.Super Kilat"<<endl;
		cout<<"		Pil(1-3) = ";
			cin>>lama[i];
		cout<<"	Masukkan berat cucian"<<endl;
		int y=0;
		while(y<3){
		cout<<"	ALERT!!!!!!"<<endl;
		y++;}
		cout<<"	*Jika Berat <2Kg, hitungan akan sama dengan 2kg";
		cout<<"	\n	Masukkan berat laundry= ";
			cin>>berat[i];
				if(berat[i]<2){
				berat[i]=2;
				}
	
	cout<<"\n	Total biaya yang harus dibayar : Rp ";
		if(layanan[i]==1 && lama[i]==1){
			harga[i]=berat[i]*4500;
			cout<<harga[i];
		}
		else if(layanan[i]==1 && lama[i]==2){
			harga[i]=berat[i]*6000;
			cout<<harga[i];
		}
			else if(layanan[i]==1 && lama[i]==3){
				harga[i]=berat[i]*8000;
				cout<<harga[i];
			}
				else if(layanan[i]==2 && lama[i]==1){
					harga[i]=berat[i]*3500;
					cout<<harga[i];
				}
					else if(layanan[i]==2 && lama[i]==2){
						harga[i]=berat[i]*5000;
						cout<<harga[i];
					}
						else if(layanan[i]==2 && lama[i]==3){
							harga[i]=berat[i]*7000;
							cout<<harga[i];
						}
							else if(layanan[i]==3 && lama[i]==1){
								harga[i]=berat[i]*1500;
								cout<<harga[i];
							}
								else if(layanan[i]==3 && lama[i]==2){
									harga[i]=berat[i]*2000;
									cout<<harga[i];
								}
									else if(layanan[i]==3 && lama[i]==3){
										harga[i]=berat[i]*3000;
										cout<<harga[i];
									}
										else 
											cout<<"Ada input yang salah";
		cout<<"\n 	Kode unik anda = "<<i+1;
		if(layanan[i]==1){
			kode[i]='A';
			cout<<kode[i];
		}
			else if(layanan[i]==2){
				kode[i]='B';
				cout<<kode[i];
			}
				else if(layanan[i]==3){
					kode[i]='C';
					cout<<kode[i];
				}
					else
						cout<<"Ada yang salah";
		if(lama[i]==1){
			code[i]=lama[i];
			cout<<code[i]<<endl;
		}
			else if(lama[i]==2){
				code[i]=lama[i];
				cout<<code[i]<<endl;
			}
				else if(lama[i]==3){
					code[i]=lama[i];
					cout<<code[i]<<endl;
				}
					else
						cout<<"Ada yang salah";
		
	}
}

void add(){
	cout<<"Tambahan data"<<endl;
	cout<<"Banyak data tambahan = ";
		cin>>tambahdata;
	banyakdata=banyakdata+tambahdata;
		for(int i= banyakdata-tambahdata;i<banyakdata;i++){
			cout<<i+1<<"	"<<"Nama = ";
				cin>>nama[i];
			cout<<"	Pilih layanan"<<endl;
			cout<<"		1.Clean & Clear"<<endl<<"		2.Cuci & Keringkan"<<endl;
			cout<<"		3.Setrika"<<endl;
			cout<<"		Pil(1-3) = ";
				cin>>layanan[i];
			cout<<"	Lama Laundry"<<endl;
			cout<<"		1.Reguler (3 hari)"<<endl<<"		2.One Day service"<<endl;
			cout<<"		3.Super Kilat"<<endl;
			cout<<"		Pil(1-3) = ";
				cin>>lama[i];
			cout<<"	Masukkan berat cucian"<<endl;
			int y=0;
			while(y<3){
				cout<<"	ALERT!!!!!!"<<endl;
				y++;}
			cout<<"\n	*Jika Berat <2Kg, hitungan akan sama dengan 2kg";
			cout<<"	\n	Masukkan berat laundry = ";
				cin>>berat[i];
				if(berat[i]<2){
				berat[i]=2;
				}
	
	cout<<"\n	Total biaya yang harus dibayar : Rp ";
		if(layanan[i]==1 && lama[i]==1){
			harga[i]=berat[i]*4500;
			cout<<harga[i];
		}
		else if(layanan[i]==1 && lama[i]==2){
			harga[i]=berat[i]*6000;
			cout<<harga[i];
		}
			else if(layanan[i]==1 && lama[i]==3){
				harga[i]=berat[i]*8000;
				cout<<harga[i];
			}
				else if(layanan[i]==2 && lama[i]==1){
					harga[i]=berat[i]*3500;
					cout<<harga[i];
				}
					else if(layanan[i]==2 && lama[i]==2){
						harga[i]=berat[i]*5000;
						cout<<harga[i];
					}
						else if(layanan[i]==2 && lama[i]==3){
							harga[i]=berat[i]*7000;
							cout<<harga[i];
						}
							else if(layanan[i]==3 && lama[i]==1){
								harga[i]=berat[i]*1500;
								cout<<harga[i];
							}
								else if(layanan[i]==3 && lama[i]==2){
									harga[i]=berat[i]*2000;
									cout<<harga[i];
								}
									else if(layanan[i]==3 && lama[i]==3){
										harga[i]=berat[i]*3000;
										cout<<harga[i];
									}
										else 
											cout<<"Ada input yang salah";
		cout<<"\n 	Kode unik anda = "<<i+1;
		if(layanan[i]==1){
			kode[i]='A';
			cout<<kode[i];
		}
			else if(layanan[i]==2){
				kode[i]='B';
				cout<<kode[i];
		}
				else if(layanan[i]==3){
					kode[i]='C';
					cout<<kode[i];
		}
					else
					cout<<"Ada yang salah";
		if(lama[i]==1){
			code[i]=lama[i];
			cout<<code[i]<<endl;
		}
			else if(lama[i]==2){
				code[i]=lama[i];
				cout<<code[i]<<endl;
		}
				else if(lama[i]==3){
					code[i]=lama[i];
					cout<<code[i]<<endl;
		}
					else
					cout<<"Ada yang salah";
		
	}
}

void output(){
	
	cout<<"Tampilkan Data\n"<<"Pilihan\n"<<"1. Tampilkan Semua Data\n"<<"2. Tampilkan Data Pilihan\n";
	cout<<"Pilihan : ";
	cin>>pilout;
		switch(pilout){
			case 1:
				for(int i=0;i<banyakdata;i++){
					cout<<i+1<<".	Nama = "<<nama[i]<<endl;
					cout<<"	Pesanan dan Layanan\n";
						if(layanan[i]==1){
						cout<<"		Clean & Clear";
						}
						else if(layanan[i]==2){
						cout<<"		Cuci & Keringkan";
						}
						else if(layanan[i]==3){
						cout<<"		Setrika";
						}
						else {
						cout<<"	Layanan Tidak diketahui";
						}
	
						if(lama[i]==1){
						cout<<", Reguler (3 Hari)"<<endl;
						}
						else if(lama[i]==2){
						cout<<", One Day Service"<<endl;
						}
						else if(lama[i]==3){
						cout<<", Super Kilat"<<endl;
						}
						else {
						cout<<", Laundry Tidak akan selesai"<<endl;
						}
					cout<<"	Berat laundry = "<<berat[i]<<" Kg"<<endl;
					cout<<"	Total Bayar = Rp "<<harga[i]<<"-,\n";
				}
			break;
			case 2:
				cout<<"Digit pertama Kode UNIK = ";
				cin>>unik;
				unik=unik-1;
				cout<<"Kode unik = "<<unik+1<<kode[unik]<<code[unik]<<endl;
				cout<<"	Nama = "<<nama[unik]<<endl;
					cout<<"	Pesanan dan Layanan\n";
						if(kode[unik]=='A'){
						cout<<"		Clean & Clear";
						}
							else if(kode[unik]=='B'){
							cout<<"		Cuci & Keringkan";
							}
								else if(kode[unik]=='C'){
								cout<<"		Setrika";
								}
									else {
									cout<<"	Layanan Tidak diketahui";
									}
	
						if(code[unik]==1){
						cout<<", Reguler (3 Hari)"<<endl;
						}
							else if(code[unik]==2){
							cout<<", One Day Service"<<endl;
							}
								else if(code[unik]==3){
								cout<<", Super Kilat"<<endl;
								}
									else {
									cout<<", Laundry Tidak akan selesai"<<endl;
									}
					cout<<"	Berat laundry = "<<berat[unik]<<" Kg"<<endl;
					cout<<"	Total Bayar = Rp "<<harga[unik]<<"-,\n";
			break;
			default:
				cout<<"Input Salah!";
		}
		char x;
		cout<<"Cek Lagi ? (y/n) ";
		cin>>x;
		if(x=='y')
			output();
		
}

int main(){
	cout<<"================Welcome to Nagi Laundry======================"<<endl;
	cout<<"Please login"<<endl;
	login();
	for(int i=0;i<=200;i++){
		nama[i]="BELUM DI INPUT!";
		layanan[i]=0;
		lama[i]=0;
	}
system("CLS");
	cout<<"================Welcome to main menu========================="<<endl;
	cout<<"Choose what you want to do next"<<endl;
	cout<<"1. Input data"<<endl;
	cout<<"2. Check data"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"What you want to do next = ";
	cin>>pilih;
		switch (pilih){
		case 1 :
			input();
		break;
		case 2 :
			output();
			
		break;
		case 3:
			cout<<"================= Terima Kasih ============================";
			return 0;
		break;
		default:
			cout<<"Input salah";
		}
		cout<<"	Back to menu ?(y/n) = ";
			cin>>choose;
				system("CLS");
				
	while (choose=='y'){
			cout<<"================Welcome to main menu========================="<<endl;
	cout<<"Choose what you want to do next"<<endl;
	cout<<"1. Add data"<<endl;
	cout<<"2. Check data"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"What you want to do next = ";
	cin>>pilih;
		switch (pilih){
		case 1 :
			add();
		break;
		case 2 :
			output();
		break;
		case 3:
			cout<<"================= Terima Kasih ============================";
			return 0;
		break;
		default:
			cout<<"Input salah";
		}
		cout<<"	Back to menu ?(y/n) = ";
			cin>>choose;
		
				system("CLS");
	}
	cout<<"================= Terima Kasih ============================";
}
