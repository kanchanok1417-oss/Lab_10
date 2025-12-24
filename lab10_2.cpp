#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	string textline;
    cout << "-------------------- BOOM ---------------------\n";
	dest << "-------------------- BOOM ---------------------\n";
    while (getline(source, textline)){
        cout << textline << "\n";
		dest << textline << endl;
    }
    
    cout << "-------------------- HA!! ---------------------\n";
    dest << "-------------------- BOOM ---------------------\n";
    source.close();
    dest.close();
	return 0;
}
