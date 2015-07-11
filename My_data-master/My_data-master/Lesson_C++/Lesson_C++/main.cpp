#include<iostream>
using namespace std;

int Processing(int);
int main(){
	 int a;
	char *s1 = "Sunpeace";
	char *s2 = "Largefiled";
	char s3[10] = "š";
	cout << s1<<s3<<s2 << endl<<endl;
	a = 5;
	Processing(a);
	a = 2;
	Processing(a);
}