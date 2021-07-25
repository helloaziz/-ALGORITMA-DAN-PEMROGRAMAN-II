#include <iostream.h>
	#include <conio.h>
	#include <stdio.h>
	
	struct Node
	{
		int noplg;
		char nama[20];
		int mlalu,msekarang,pakai,total,pajak,bayar;		
Node *prev; 
		Node *next;		
	};
	
	Node *head = NULL;
	Node *tail = NULL;

	void tambahdepan()
	{
		Node *temp; 
		// masukkan data...........................
		temp = new Node;
		clrscr();
		cout << "Isikan Data Simpul Baru\n";
		cout << "====================================\n";
		cout << "No Pelanggan  : "; cin >> temp->noplg;
		cout << "Nama     : "; gets(temp->nama);
		cout << "Meter Lalu    : "; cin >> temp->mlalu;
		cout << "Meter Sekarang    : "; cin >> temp->msekarang;
		temp->pakai = temp->msekarang - temp->mlalu;
		temp->total = temp->pakai * 1000;		
		if (temp->pakai >=100 ){
		temp->pajak = 0,5 * total )
		}else if (temp->pakai >=50 && ==100 ){
		temp->pajak = 0,25 * total ;
}else if (temp->pakai <=50 ){
temp->pajak=0%
}else{
Cout << “eror bung”;

temp->prev = NULL;
		temp->next = NULL;
		cout << endl;
		
		// Set up link to this node........................
		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			temp->next = head;
			head->prev = temp;
			head = temp;
		}
	} 	
	





	void tambahbelakang()
	{
		Node *temp; 
		// masukkan data...........................
		temp = new Node;
		clrscr();
		cout << "Isikan Data Simpul Baru\n";
		cout << "====================================\n";
		cout << "No Pelanggan  : "; cin >> temp->noplg;
		cout << "Nama     : "; gets(temp->nama);
		cout << "Meter Lalu    : "; cin >> temp->mlalu;
		cout << "Meter Sekarang    : "; cin >> temp->msekarang;
		temp->pakai = temp->msekarang - temp->mlalu;
		temp->total = temp->pakai * 1000;		
		if (temp->pakai >=100 ){
		temp->pajak = 0,5 * total )
		}else if (temp->pakai >=50 && ==100 ){
		temp->pajak = 0,25 * total ;
}else if (temp->pakai <=50 ){
temp->pajak=0%;
}else{
Cout << “eror bung”;
		temp->prev = NULL;
		temp->next = NULL;
		cout << endl;
		
		// Set up link to this node........................
		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			temp->prev = tail;
			tail = temp;
		}	
	}	
	


	void hapusdepan()
	{
		Node *temp;
		temp = head;
		// cek apakah kosong, 1 node, atau bbrp node.......
		if (head == NULL)
		{
			cout << "\nLinked List Kosong ! [Enter] ";
			getch();
		}
		else
		{
			//jika ada sebuah node.........................
			if(head->next == NULL)
			{
				head = NULL;
				tail = NULL;
				
			}
			else
			{
				//jika node lebih dari 1...................
				head = head->next;
				head->prev = NULL;
			}
			delete temp;
		}
	} 
	
	void hapusbelakang()
	{
		Node *temp;
		temp = tail;
		// cek apakah kosong, 1 node, atau bbrp node.......
		if (head == NULL)
		{
			cout << "\nLinked List Kosong ! [Enter] ";
			getch();
		}
		else
		{
			//jika ada sebuah node.........................
			if(head->next == NULL)
			{
				head = NULL;
				tail = NULL;
				
			}
			else
			{
				//jika node lebih dari 1...................
				tail = temp->prev;
				tail->next = NULL;
			}
			delete temp;
		}		
	}	

	void print_node()
	{
		Node *temp;
		temp = head;
		
		if(temp == NULL) 
			cout << "\nEmpty List !, [Enter]";
		else
		{
			clrscr();
			cout << "\nIsi Linked List\n";
			cout << "============================\n";
			do
			{
				cout << "No pelangan : " << temp->noplg;
				cout << ", nama : " << temp->nama;
				cout << ", mlalu : " << temp->mlalu;
				cout << ", mlalu : " << temp->msekarang;
				cout << ", pakai : " << temp->pakai;
				cout << ", total : " << temp->total;
				cout << ", total : " << temp->pajak;
				cout << endl;  
				temp = temp->next; 
			} while(temp != NULL); 
			cout << "============================\n";
			cout << "[Enter]";
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
			cout << "----------------------------------\n"
				<< " Menu Pilihan (SLLNC)\n"
				<< "----------------------------------\n"
				<< " [1] Tambah Depan \n"
				<< " [2] Tambah Belakang \n"
				<< " [3] Hapus Depan \n"
				<< " [4] Hapus Belakang \n"
				<< " [5] Cetak Linked List \n"
				<< " [6] Keluar \n\n"
				<< "----------------------------------\n"
				<< "Masukkan pilihan : "; cin >> pilih;
			switch (pilih)
			{
				case 1:
					tambahdepan();
					break;
				case 2:
					tambahbelakang();
					break;
				case 3:
					hapusdepan();
					break;
				case 4:
					hapusbelakang();
					break;					
				case 5:
					print_node();
					break;				
				default:
					cout << "Pilihan tidak tersedia ! ";
					break;
			}
		} while (pilih != 6);
	}