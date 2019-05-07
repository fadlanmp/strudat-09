/*
Nama program			: Exercise 1
Nama					: Fadlan Mulya Priatna
NPM						: 140810180041
Tanggal pembuatan		: 7 Mei 2019
Deskripsi progrram		: Program ini berisikan kodingan exercise 1 stack array
*/
#include <iostream>

using namespace std;
const int maxElement = 255;

struct stack{
    char isi[maxElement];
    int top;
};
stack s;

void createStack (stack& s){
    s.top = -1;
}

void push (stack& s, char elemenBaru){
    if (s.top == maxElement-1){
        cout<<"Stack Full"<<endl;
    }
    else{
        s.top = s.top+1;
        s.isi[s.top] = elemenBaru;
    }
}

void pop(stack&s,char& elemenHsl,int& n){
	if (s.top<0){
		cout<<"Tumpukan sudah kosong"<<endl;
	}
	else{
		for(int i=n-1;i>=0;i--){
            elemenHsl= s.isi[s.top];
			s.top=s.top - 1;
			cout<<s.isi[i]<<" ";
        }
	}
}

int main(){
    int n;
    char baru;
    
    createStack(s);
	cout<<"Jumlah huruf : ";cin>> n;
    
    for(int i=0;i<n;i++){
        cout<<"Input huruf ke-"<<i+1<<" : ";cin>>baru;
        push(s,baru);
    }
    
    pop (s,baru,n);
}
