#include <iostream.h>
#include <conio.h>
#include <stdio.h>

#define MAX 10

struct pgn
{
 int noplg;
 int daya;
 int biaya;
};

pgn antrian[MAX];
int front = -1;
int rear = -1;


//cek apakah antrian penuh.........................................
bool isFull()
{
	if ((front == rear + 1) || ( front == 0 && rear == MAX -1 )){
   return true;
   }
   else
   return false;
}

//cek apakah antrian kosong........................................
bool isEmpty()
{
	return front == -1;
}

//manambahkan data ke antrian......................................
void enqueue() {
	if (isFull())
	{
		cout << "\nAntrian penuh  ! ";
		getch();
	}
	else
	{

      clrscr();

      if(front==-1)
      front = 0;

      rear = (rear + 1) % MAX;
		cout << "\nMasukkan noplg \t: ";				cin >> antrian[rear].noplg;
		cout << "\nMasukkan daya listrik \t: ";	cin >> antrian[rear].daya;
		cout << "\nMasukkan biaya \t: ";				cin >> antrian[rear].biaya;

   }
}

// mengambil data dari antrian.....................................
void dequeue() {
   int xdequeue;
	if (isEmpty())
	{
		cout << "\nAntrian masih kosong ! ";
	}
	else
	{
      xdequeue = front;
		cout << "\nMengambil antrian \"" << antrian[front].noplg << "\"";
		for (int i = front; i <= MAX-1;i++)  {
			antrian[i] = antrian[i+1];
   }
    if (front == rear) {
      front = rear = -1;

	}
   else {
   rear = (rear -1) % MAX;

	}
   cout << endl;
    }
    getch();
}

//Menampilkan Queue
void printQueue() {
	if (isEmpty())
	{
		cout << "\nAntrian kosong ! ";
	}
	else {
      clrscr();
      cout << "\nKondisi Antrian Pasang Baru : \n\n";
      cout << "===================================== \n";
      cout << "| NO PLG | Daya Listrik | Biaya |\n";
      cout << "===================================== \n";
      for (int i = 0; i <= rear; i++)
      {
          cout <<"  " <<antrian[i].noplg << "   " "         " << antrian[i].daya
               <<"  " << "  " << antrian[i].biaya<<endl;       
      }
      cout << "==================================== \n";
      cout << "Front = " << front << endl;
      cout << "Rear  = " << rear << endl;
      cout << "\nDibuat oleh : A12.2019.06316 Muhammad Alwi Abdul Aziz" << endl;
      cout << "\nEnter kembali ke menu";
    }
    getch();
}

//program utama ...........................................
void main()
{
	int pilih;
	do
	{
		//Tampilan menu....................................
		clrscr();
		cout << "Alvin Steven Nim : A12.2019.06310"  ;
      cout << "----------------------------------\n"
			<< " Menu Pilihan\n"
			<< "----------------------------------\n"
			<< " [1] Enqueue / Tambah Antrian \n"
			<< " [2] Dequeue / Hapus antrian \n"
			<< " [3] PrintDequeue / Cetak Antrian \n"
			<< " [4] Keluar \n\n"
			<< "----------------------------------\n"
			<< "Masukkan pilihan : "; cin >> pilih;
		switch (pilih)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				printQueue();
				break;
			default:
				cout << "Pilihan tidak tersedia ! ";
				break;
		}
	} while (pilih != 4);
}