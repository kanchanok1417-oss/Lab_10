#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include<cstdlib> 
#include <cmath>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("score.txt");
	
	int count = 0;
    double sum = 0, mean, SD, num;
    string textline;

    while (getline(source,textline)){
        
        sum += atof(textline.c_str());
        count++;} mean = sum / count;
    
    source.clear();
    source.seekg(0);
    
    while (getline(source,textline)){
        num += pow(atof(textline.c_str())-mean, 2);
    } SD = sqrt(num/count);

    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = "<< mean << '\n';
    cout << "Standard deviation = " << SD;
    
    source.close();
    dest.close();
	return 0;
}