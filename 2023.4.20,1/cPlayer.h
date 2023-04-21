#pragma once

// ���, ����, �̵�
enum E_PSTATE { P_IDLE, P_FIGHT, P_WALK };

enum E_ARMOR { A_EMPTY, A_LIGHT, A_MEDIUM, A_HEAVY };

class cPlayer
{
private:
	string m_strName;	// ĳ���� �̸�
	E_PSTATE m_eState;	// ĳ���� ����
	int m_nLevel;	// ����
	int m_nExp;	// ����ġ
	int m_nMaxHp;	// �ִ� ü��
	int m_nCurrHp;	// ���� ü��
	int m_nAtt;	// ���ݷ�

	E_ARMOR m_eArmor; // ���� ���� ��

	E_PLACE m_eCurrPlace; // ���� ĳ������ ���

public:
	cPlayer(); // ������
	~cPlayer(); // �ı���
	
	// �ζ��� �Լ� - �Ϲ����� ȣ������� ��ġ�� �ʰ� �Լ��� ��� �ڵ带 ȣ��� �ڸ��� �ٷ� ����
	string GetName() { return m_strName; } // Getter : Ŭ�������� ������� �����͸� �������� �Լ�
	E_PSTATE GetState() { return m_eState; }
	int GetLevel() { return m_nLevel; }
	int GetExp() { return m_nExp; }
	int GetMaxHp() { return m_nMaxHp; }
	int GetCurrHp() { return m_nCurrHp; }
	void SetMaxHp() { m_nCurrHp = m_nMaxHp; }
	int GetAttDamage() { return m_nAtt; }
	int GetExDamage() { return rand() % 6; }
	void TakeDamage(int damage) { m_nCurrHp -= damage; }

	// �÷��̽� ���� ����
	E_PLACE GetPlace() { return m_eCurrPlace; }
	void SetPlace(E_PLACE place) { m_eCurrPlace = place; }

	void IncreaseExp(int exp);
	void CalcMaxHp();
	void CalcAttDamage();
};

