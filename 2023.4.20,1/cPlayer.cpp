#include "pch.h" // cPlayer.h보다 먼저 include되야한다.
#include "cPlayer.h"

cPlayer::cPlayer() // cPlayer.h 에서 cPlayer 지정하고 F12 누르면 정의로 넘어옴
{
	m_strName = "캐릭터";
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
	// 현재 경험치가 150 + 260 = 410 => 5렙
	m_nExp += exp;

	if (m_nLevel * 100 < m_nExp)
		//m_nLevel++;  --> 레벨을 1만 올려주기 때문에 보강이 필요
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
