#include <iostream>
#include <string>
#include <string.h>

using namespace std;

void intro();
void menu ();
void transaksi ();
void belilagi ();
void ulangan ();
void struk ();
void pembayaran ();
int jumlah = 0;
int a;
int harga[3] = {43000,3500,2000};
int barang[3];
int hargab[3];
string menu1[3] = {"Susu bendera 400gr" , "Air mineral" , " Choco Chip " };
int pilihanbarang1;


int main()
{   intro ();
    menu();
    transaksi();
    belilagi();

    return 0;


}
void ulangan()
{
    transaksi ();
    belilagi();
}

void intro()
{
    cout <<" Selamat datang di Supermarket " << endl;

}
void menu ()
{
    cout <<" Barang yang dijual " << endl;
    cout <<"1. Susu bendera 400gr "; cout <<" Rp.43000 " << endl;
    cout <<"2. Air Mineral        "; cout <<" Rp.3500 " << endl;
    cout <<"3. Choco Chip         " ; cout <<" Rp.2000 " << endl;
}
void transaksi ()
{
    cout <<" Barang apa yang ingin anda beli ? " << endl;
    cout <<"Jawaban = "; cin>>pilihanbarang1;
    cout << endl;
        if ( pilihanbarang1 == 1)
        {
            cout <<" Anda akan membeli " << menu1[0] << endl;
            cout <<" Berapa banyak yang ingin anda beli? " << endl;
            int banyak;
            cin >> banyak;
            hargab[0] = harga[0] * banyak;
            jumlah = jumlah + hargab[0];
            barang[0] = banyak;
        }
        else if ( pilihanbarang1 == 2)
        {
            cout <<" Anda akan membeli " << menu1[1] << endl;
            cout <<" Berapa banyak yang ingin anda beli? " << endl;
            int banyak;
            cin >> banyak;
            hargab[1] = harga[1] * banyak;
            jumlah = jumlah + hargab[1];
            barang[1] = banyak;
        }
        else
        {
            cout <<" Anda akan membeli Choco Chip" << endl;
            cout <<" Berapa banyak yang ingin anda beli? " << endl;
            int banyak;
            cin >> banyak;
            hargab[2] = harga[2] * banyak;
            jumlah = jumlah + hargab[2];
            barang[2] = banyak;
        }

}
void belilagi ()
{
    cout << " Adalagi yang ingin anda beli ? ( Y / N )" << endl;
	char ada;
	cin >> ada;
	if (ada == 'Y' || ada == 'y')
	{
		ulangan();
	}
	else
	{
		pembayaran();
	}
}
void pembayaran()
{
    cout << "            =====    Struk Pembayaran     ====== " << endl;
	cout << endl;
	cout << " Barang Yang Telah Anda Beli Adalah = " << endl;
	cout << endl;
	cout <<" Jumlah Total = " << jumlah << endl;
	cout <<" Dengan rincian = " << endl;

	for (int i = 0; i < 16; i++)
	{


		if (barang[i] >= 1)
		{
			cout << menu1[i] << " Sebanyak " << barang[i] << " Buah " << " = " << hargab[i] << endl;
		}


	}


}

