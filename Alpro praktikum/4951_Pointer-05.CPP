#include <iostream.h>
#include <stdio.h>
#include <conio.h>

int fsatu(int *a, int *b)
//deklarasi pointer a dan b tipe integer
{
	*a *= 2;
   //deklarasi pointer a dengan rumus dikali 2
   *b *= 2;
   //deklarasi pointer b dengan rumus dikali 2
   return 0;
}
void main ()
{
	int a, b;
   //deklarasi variabel a dan b tipe data integer

	cout << "masukan nilai a = "; cin >> a;
   //memasukan nilai kedalam variabel a
	cout << "masukan nilai b = "; cin >> b;
   //memasukan nilai kedalam variabel b

   cout << "\nSebelum melewati fungsi fsatu " <<endl;
   //menampilkan kata-kata
   cout << "a = " << a << endl;
   //menampilkan nilai variabel a sebelum melewati fungsi
   cout << "b = " << b << endl;
   //menampilkan nilai variabel b sebelum melewati fungsi

   fsatu(&a, &b);
   cout << "\nSetelah melewati fungsi fsatu " <<endl;
   //menampilkan kata-kata
   cout << "a = " << a << endl;
   //menampilkan nilai variabel a sesudah melewati fungsi
   cout << "b = " << b << endl;
   //menampilkan nilai variabel b sesudah melewati fungsi
getch ();
}
