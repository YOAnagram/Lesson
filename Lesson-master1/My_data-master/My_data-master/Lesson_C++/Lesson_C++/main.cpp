#include<iostream>
using namespace std;

class MONSTER{
private:
	int LV;
	int HP;
	int MP;
	int MONEY;
	char *NAME;
public:
	//コンストラクタ
	MONSTER(int, int, int, int, char*);
	void DISPLAY(){
		cout << NAME << ":: LV:" << LV << "  HP:"<<HP<<"  MP:"<<MP<<"  MONEY:"<<MONEY << endl;
	}
};
//コンストラクタ定義
MONSTER::MONSTER(int a, int b, int c, int d,char *e){
	LV = a;
	HP = b;
	MP = c;
	MONEY = d;
	NAME = e;
}

int main(){
	MONSTER sraim(1, 10, 15, 100,"sura");
	sraim.DISPLAY();
	MONSTER gorem(5, 50, 55, 500, "gore");
	gorem.DISPLAY();
	MONSTER naite(10, 60, 65, 400, "nai");
	naite.DISPLAY();
}