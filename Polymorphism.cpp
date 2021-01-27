#include<vector>
#include<sstream>
#include <iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

class Enemy
{
protected:
	int attackPower;
public:
	virtual void SetAttackPower(int a){
		attackPower = a; 
	}

};

class Ninja : public Enemy {
public:
	void attack() {
		cout << "Im a ninja chop! - " << attackPower << endl;
	}
};

class Monster : public Enemy {
public:
	void attack() {
		cout << "IM monster must eat you - " << attackPower << endl;
	}
};
int main()
{
	Ninja n;
	Monster m;
	Enemy* enemy1 = &n;
	Enemy* enemy2 = &m;
	enemy1->SetAttackPower(50);
	enemy2->SetAttackPower(100);
	n.attack();
	m.attack();
}


