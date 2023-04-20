#pragma once

// ���, ����, �̵�
enum E_PSTATE { P_IDLE, P_FIGHT, P_WALK };

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

public:
	cPlayer();
	~cPlayer();
	
	// �ζ��� �Լ� - �Ϲ����� ȣ������� ��ġ�� �ʰ� �Լ��� ��� �ڵ带 ȣ��� �ڸ��� �ٷ� ����
	string GetName() { return m_strName; } // Getter : Ŭ�������� ������� �����͸� �������� �Լ�
	E_PSTATE GetState() { return m_eState; }
	int GetLevel() { return m_nLevel; }
	int GetExp() { return m_nExp; }
	int GetMaxHp() { return m_nMaxHp; }
	int GetCurrHp() { return m_nCurrHp; }
	int GetAtt() { return m_nAtt; }

	void IncreaseExp(int exp);
	void CalcMaxHp();
	void CalcAttDamage();
};

