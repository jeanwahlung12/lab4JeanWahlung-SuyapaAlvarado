#include <iostream>
#include <string>
#include <bitset>

using namespace std;
string CodigoCesar(string);
string CodigoXOR(string, string); 

 int main(){

 string palabra,clave;
 cout << "Ingrese el texto que desea codificar: ";
 cin >> palabra; 
 cout << "Ingrese la palabra clave: ";
 cin >> clave;
 cout << CodigoCesar(palabra) << endl;
 CodigoXOR(clave, palabra);

 return 0;
}


string CodigoCesar (string palabra){
 string palabrac="";
 char temp;
 string result = "";
 int num = 0;
	for (int i=0;i < palabra.size();i++){
		//temp = palabra.at(i);
		num = (int) palabra.at(i);
		if (num>=121){
			if (num==121)
				num=97;
			if (num==122)
				num=98;
		}else{
		num = num+2;
		}
			
		palabrac += (char) num;
		
	}
return palabrac;
}

string CodigoXOR (string clave, string palabra){
 
 int arrayClave[clave.size()];
 int arrayPalabra[palabra.size()];
 string palabrac="";
 bitset<8>bitsetc[clave.size()];
 bitset<8>bitsetp[palabra.size()];

 //llenar el arreglo de enteros la clave
 for (int i =0; i< clave.length(); i++){
	arrayClave[i] = clave.at(i);
	
 }//fin for

 //llenar el arreglo de enteros de palabras
 for (int j=0; j < palabra.length();j++){
      arrayPalabra[j] = palabra.at(j);
 }

//convertir a byte la clave
 for (int k=0; k < clave.length(); k++){
	bitsetc[k] = arrayClave[k];
//	cout << bitsetc[k] << " " ;
}//cout << endl;

//convertir a byte la palabra
 for (int i=0;i < palabra.length();i++){
	bitsetp[i] = arrayPalabra[i];
} 
//cout << endl;
bitset<8> claveMod [palabra.size()];
int c = 0;
 for (int i = 0; i < palabra.size(); i++){
if (c >= clave.size()){
c = 0;
}
claveMod[i] = bitsetc[c];
c++;
}  

bitset<8> binario [palabra.size()];
for (int i = 0; i < palabra.size(); i++){
 binario[i] = bitsetp[i]^claveMod[i];
}

for (int i = 0; i < palabra.size(); i++){
	cout << binario[i].to_ulong() << " ";
}
return "";
}
