#include <iostream>
#include <string.h>
#include <ctime>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned int uint;

string randomString(uint maxLength = 5, std::string charIndex = "abcdefghijklmnaoqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890")
{ // maxLength and charIndex can be customized, but I've also initialized them.
    uint length = rand() % maxLength + 2; // length of the string is a random value that can be up to 'l' characters.

    uint indexesOfRandomChars[15]; // array of random values that will be used to iterate through random indexes of 'charIndex'
    for (uint i = 0; i < length; ++i) // assigns a random number to each index of "indexesOfRandomChars"
        indexesOfRandomChars[i] = rand() % charIndex.length();

    string randomString = ""; // random string that will be returned by this function
    for (uint i = 0; i < length; ++i)// appends a random amount of random characters to "randomString"
    {
        randomString += charIndex[indexesOfRandomChars[i]];
    } 
    return randomString;
}

int main()
{	int a;
	string jajal;
    srand(time(NULL));
    //std::cout << randomString() << std::endl; //ga usah pake ini
    while(a!=4){jajal=randomString(); //langsung begini buat nyimpen randomnya
    a=jajal.length();}
	if(a==4){
	char wadah[a],baskom[3]; strcpy(wadah,jajal.c_str());
    cout<<"Hasil char mentah : ";
    for(int i=0;i<4;i++)baskom[i]=wadah[i];
	for(int j=0;j<4;j++)cout<<baskom[j];
	string hasil=baskom;cout<<"\nIni hasil convert string : "<<hasil;
	}
} 
