#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int main ()
{
	int nilai1 = 5, nilai2 = 15;
   /*deklarasi variabel bertipe integer,
    nilai1 bernilai 5 dan nilai2 bernilai 15*/
   int *p1, *p2;
   //deklarasi variabel pointer p1 dan p2 bertipe integer

	p1 = &nilai1;
   //menyimpan alamat nilai1 pada p1
   p2 = &nilai2;
   //menyimpan alamat nilai1 pada p2

	*p1 = 10;
   //pointer p1 diberi nilai 10
   *p2 = *p1;
   //pointer p2 sama dengan pointer p1

	p1 = p2;
   //nilai p1 sama dengan p2
   *p1 = 20;
   //pointer p1 diberi nilai 20

	cout << "nilail = " << nilai1 << '\n';
   //menampilkan nilai variabel nilai1
	cout << "nilai2 = " << nilai2 << '\n';
   //menampilkan nilai variabel nilai2
return 0;
}