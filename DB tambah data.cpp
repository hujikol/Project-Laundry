#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int banyak,bny,total;
	ifstream ambil;
	ofstream input;
		ambil.open("filedata.txt");
			ambil>>banyak;
			cout<<"Masukkan banyak data : ";cin>>bny;
			total=bny+banyak;
	
		ambil.close();
	input.open("filedata.txt");
	input<<total;
	input.close();
}
