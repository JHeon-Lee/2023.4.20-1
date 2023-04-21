#pragma once
class cMonster
{
private:
	string m_strName;
	int m_nHp;
	int m_nAtt;
	int m_nExp;

public:
	cMonster();
	cMonster(string name, int hp, int att, int exp); // 인자값을 가진 생산자
	~cMonster();

	string GetName() { return m_strName; }
	int GetHp() { return m_nHp; }
	int GetAttDamage() { return m_nAtt; }
	int GetExDamage() { return rand() % 10; }
	void TakeDamage(int damage) { m_nHp -= damage; }
	int GetExp() { return m_nExp; }
};

