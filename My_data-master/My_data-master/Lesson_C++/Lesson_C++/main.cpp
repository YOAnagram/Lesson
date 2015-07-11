#include<iostream>
using namespace std;

int Processing(int);
void Message(void);
int main(){
	 int a;
	 int &A = a;
	char *s1 = "Sunpeace";
	char *s2 = "Largefiled";
	char s3[10] = "★";
	cout << s1<<s3<<s2 << endl<<endl;
	a = 5;
	Processing(a);
	a = 2;
	Processing(a);

	cout << A << endl;

	Message();

}

void Message(void){
	int num = 5;
	double num2 = 0.01;
	char str1[128] = { 0 }; //0で埋める
	char str2[128] = { 0 };
	char str3[128] = { 0 };
	sprintf_s(str1, "%d", num);
	sprintf_s(str2, "現在の所持金%d円", num);
	sprintf_s(str3, "薄さ%.2fミリ", num2);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	//数値を文字に変換
	char Level[128] = { 0 };
	int LV = 0;
	sprintf_s(Level, "%d", num);
	cout << "あなたのLV.は"<<Level<<"です。" << endl;
	//文字を数値にする
	LV = atoi(Level);
	cout << LV << endl;
};
