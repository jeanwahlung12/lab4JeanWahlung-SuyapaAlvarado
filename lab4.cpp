#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
string CodigoCesar(string);

 int main(){

 string palabra;
 cout << "Ingrese el texto que desea codificar: ";
 cin >> palabra; 
 cout << "Ingrese la palabra clave: ";

 cout << CodigoCesar(palabra);


 return 0;
}


string CodigoCesar (string palabra){
 string palabrac="";
 char temp;
 string result;
 int num;
	for (int i=0;i < palabra.size();i++){
		temp = palabra[i];
		num = (int)temp;
		if (num>=121){
			if (num==121)
				num=97;
			if (num==122)
				num=98;
		}else{
		num = num+2;
		}
			
		palabrac = palabrac + (char)num;
		
	}
return palabrac;
}
