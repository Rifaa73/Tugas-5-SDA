#include <iostream>

using namespace std;

struct databarang{ 
    
    
    string *kode = new string[20];  
    int *jumlah = new int[20];      
    string *nama = new string[20];  


};

int main() {
    databarang db; 

    int a,i;  

    cout << "jumlah Inputan : " ; 
    cin >> a; 
    cout << endl;

    for (int i =1; i<= a; i++) { 

       
        cout << i << ". Kode Barang :"; cin >> db.kode[i];      
        cout << "   Nama Barang :"; cin >> db.nama[i];         
        cout << "   Jumlah Barang :"; cin >> db.jumlah[i];     
        cout << endl;

    }

    cout << "Daftar Barang :" << "\n";
    for (int i =1; i<= a; i++) { 

	
        cout << i << ". Kode Barang :" << db.kode[i] << endl;   
        cout << "   Nama Barang :" << db.nama[i] << endl;      
        cout << "   Jumlah Barang :" << db.jumlah[i] << endl;   
        cout << endl;

}
}