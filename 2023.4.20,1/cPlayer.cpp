#include "pch.h" // cPlayer.h���� ���� include�Ǿ��Ѵ�.
#include "cPlayer.h"

cPlayer::cPlayer() // cPlayer.h ���� cPlayer �����ϰ� F12 ������ ���Ƿ� �Ѿ��
{
	m_strName = "ĳ����";
	m_eState = P_IDLE;
	
	m_nExp = 0;
	m_nLevel = 1;

	m_eArmor = A_LIGHT;
	CalcMaxHp();

	m_nCurrHp = m_nMaxHp;
	m_nAtt = 10;
}

cPlayer::~cPlayer()
{
	
}

void cPlayer::IncreaseExp(int exp)
{
	// ���� ����ġ�� 150 + 260 = 410 => 5��
	m_nExp += exp;

	if (m_nLevel * 100 < m_nExp)
		//m_nLevel++;  --> ������ 1�� �÷��ֱ� ������ ������ �ʿ�
		m_nLevel = m_nExp / 100 + 1;
}

void cPlayer::CalcMaxHp()
{
	switch (m_eArmor)
	{
	case A_LIGHT:
		m_nMaxHp = 150;
		break;
	case A_MEDIUM:
		m_nMaxHp = 200;
		break;
	case A_HEAVY:
		m_nMaxHp = 300;
		break;
	default:
		m_nMaxHp = 100;
		break;
	}
}

void cPlayer::CalcAttDamage()
{
}
