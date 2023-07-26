#include<iostream>
#include<fstream>
using namespace std;
int main () {
string a;
ofstream fich ("ficha.text");
cout<<"ingrese una frase:";
getline (cin, a);
fich<<a;





}
