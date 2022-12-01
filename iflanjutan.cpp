#include <iostream>

using namespace std;

float hitungKBalok(float p, float l, float t){
  float K = 4 * (p+l+t);
  return K;
}

float hitungLBalok(float p, float l, float t){
  float L = 2 * (p*l + p*t + l*t);
  return L;
}

float hitungVBalok(float p, float l, float t){
	float V = p*l*t;
	return V; 
}

void tampilKeliling(float p, float l, float t){
  float K = hitungLBalok(p, l, t);
  cout <<"Keliling : " << endl;
  cout <<"K \t= 4 x (p+l+t)" << endl;
  cout <<"K \t= " << 4 <<" x " << "(" << p << "+" << l << "+" << t << ")" << endl;
  cout <<"K \t= " << 4 << " x " << (p+l+t) << endl;
  cout <<"K \t= " << 4 * (p+l+t) << endl;
}

void tampilLuas(float p, float l, float t){
  float L = hitungKBalok(p, l, t);
  cout <<"Luas : " << endl;
  cout <<"L \t= 2 x (pxl + pxt + lxt)" << endl;
  cout <<"L \t= " << 2 <<" x " << "(" << p*l << "+" << p*t << "+" << l*t << ")" << endl;
  cout <<"L \t= " << 2 <<" x " << (p*l+p*t+l*t) << endl;
  cout <<"L \t= " << 2 * (p*l+p*t+l*t) << endl;
}

void tampilVolume(float p, float l, float t){
  float V = hitungVBalok(p, l, t);
  cout <<"Volume : " << endl;
  cout <<"V \t= p x l x t" << endl;
  cout <<"V \t= " << p << " x " << l << " x " << t << endl;
  cout <<"V \t= " << p*l*t << endl;
}

int menu, jumlah, balok;
float p, l, t;
float absensi, tugas, uts, uas, nilai_akhir;
char nilai_huruf;
char kembali;

int main() {
     do{
     	system("color A");
     	cout <<"================================" << endl;
	    cout <<"         Menu Pilihan           " << endl;
	    cout <<"================================" << endl;
	    cout << endl;
	    cout <<"1. Menu Makanan " << endl;
	    cout <<"2. Nilai Mahasiswa " << endl;
	    cout <<"3. Menghitung Keliling Luas dan Volume Balok " << endl;
	    cout << endl;
	    cout <<"Pilih : ";
	    cin >> menu;
    
    switch(menu){
     case 1:
     	system("color A");
     	system("CLS");
	    cout <<"-----Menu makanan-----\n";
	    cout <<" 1. Nasi Padang\n ";
	    cout <<"22. Nasi Goreng\n ";
	    cout <<"33. Nasi Bakar\n ";
        cout <<"Masukan nomor makanan: ";
        cin >> menu;
		
	switch(menu){
      case 1:
      	system("CLS");
      	cout <<"=========================================" << endl;
      	cout <<"                Pembayaran               " << endl;
      	cout <<"=========================================" << endl;
        cout <<"Anda memilih makanan Nasi Padang Rp.20000" << endl;
        cout <<"Masukan Jumlah beli : ";
        cin >> jumlah;
        cout <<"=========================================" << endl;
        cout <<"Total Pembelian : Rp." << jumlah*20000 << endl;
        if (jumlah*20000>=500000){
        	cout <<"Selamat anda mendapatkan diskon 15% " << endl;
        	cout << "Total Bayar = Rp. " << (jumlah*20000-(0.15*jumlah*20000)) << endl;
		}
		else if (jumlah*20000>=250000){
        	cout <<"Selamat anda mendapatkan diskon 5% " << endl;
        	cout << "Total Bayar = Rp. " << (jumlah*20000-(0.05*jumlah*20000)) << endl;
		}
		
        break;
        
      case 22:
       	system("CLS");
       	 cout <<"=========================================" << endl;
       	 cout <<"                Pembayaran               " << endl;
       	 cout <<"=========================================" << endl;
         cout <<"anda memilih makanan Nasi Goreng Rp.15000"<<  endl;
         cout <<"Masukan jumlah beli : ";
         cin >> jumlah;
         cout <<"=========================================" << endl;
         cout <<"Total Pembelian : Rp." << jumlah*15000 << endl;
         if (jumlah*15000>=500000){
        	cout <<"Selamat anda mendapatkan diskon 15% " << endl;
        	cout << "Total Bayar = Rp. " << (jumlah*15000-(0.15*jumlah*15000)) << endl;
		}
		else if (jumlah*15000>=250000){
        	cout <<"Selamat anda mendapatkan diskon 5% " << endl;
        	cout << "Total Bayar = Rp. " << (jumlah*15000-(0.05*jumlah*15000)) << endl;
		}
        break;
        
      case 33:
       	system("CLS");
       	  cout <<"=========================================" << endl;
      	  cout <<"                Pembayaran               " << endl;
      	  cout <<"=========================================" << endl;
          cout <<"Anda memilih makanan Nasi Bakar Rp.10000"<< endl;
          cout <<"Masukan jumlah beli : ";
          cin >> jumlah;
          cout <<"=========================================" << endl;
          cout <<"Total Pembelian : Rp." << jumlah*10000 << endl;
          if (jumlah*10000>=500000){
        	cout <<"Selamat anda mendapatkan diskon 15% " << endl;
        	cout << "Total Bayar = Rp. " << (jumlah*10000-(0.15*jumlah*10000)) << endl;
		}
		else if (jumlah*10000>=250000){
        	cout <<"Selamat anda mendapatkan diskon 5% " << endl;
        	cout << "Total Bayar = Rp. " << (jumlah*10000-(0.05*jumlah*10000)) << endl;
		}
		
          break;
          
        default:
          cout <<"Makanan yang anda pilih tidak ada :( " << endl;
          break;
    }
}

	switch(menu){
     	case 2:
   		system("color A");
     	system("CLS");
			cout<<"Program Menghitung Nilai Akhir Mahasiswa"<<endl;
			cout<<"----------------------------------------"<<endl;
			
			//Proses input
			cout<<"Masukan Nilai Absensi : ";
			cin>>absensi;
			
			cout<<"Masukan Nilai Tugas   : ";
			cin>>tugas;
			
			cout<<"Masukan Nilai UTS     : ";
			cin>>uts;
			
			cout<<"Masukan Nilai UAS     : ";
			cin>>uas;
		
			//Hitung sesuai rumus
			nilai_akhir = ((absensi*0.1)+(tugas*0.2)+(uts*0.3)+(uas*0.4));
			
			if (nilai_akhir>=90){
				nilai_huruf='A';
			}else if (nilai_akhir>=80){
				nilai_huruf='B';
			}else if(nilai_akhir>=60){
				nilai_huruf='C';
			}else if (nilai_akhir>=50){
				nilai_huruf='D';
			}else {
				nilai_huruf='E';
			}
		
			//Proses output
			cout <<"============================" << endl;
			cout << endl;
			cout <<"Nilai Akhir : "<< nilai_akhir << endl;
			cout <<"Nilai Huruf : "<< nilai_huruf << endl;
			cout <<"____________________________" << endl;
			break;
   }
    
    switch(menu){
       case 3:
       	system("color A");
       	system("CLS");
          cout <<"Menghitung Balok " << endl;
          cout <<"---------------------------------\n";
          cout << "Masukan Panjang : ";
          cin >>p;     
          cout << "Masukan Luas : ";
          cin >>l;
          cout << "Masukan Tinggi : ";
          cin >>t;
          cout << endl;
          tampilKeliling(p, l, t);
          tampilLuas(p, l, t);  
          tampilVolume(p, l, t);
          break;    
     }   
     
     cout << endl;
     cout <<"Kembali Ke Menu ? y/n : ";
     cin >> kembali;
     system("CLS");
  } while (kembali== 'Y' | kembali== 'y');
  	cout <<"Program Selesai" << endl;
}