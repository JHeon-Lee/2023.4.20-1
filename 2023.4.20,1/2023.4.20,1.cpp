// 2023.4.20,1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "cPlayer.h"

//struct tagPlayer
//{
//    int a;
//
//public: // struct의 default
//    int b;
//
//private:
//    int c;
//};
//
//class cPlayer
//{
//    int a;
//
//public:
//    int b;
//    int Function();
//
//private: // class의 default
//    int c;
//};
//
//int cPlayer::Function()
//{
//
//}

// 구조체와 클래스는 public, private 공간을 제외하면 구조상 비슷하지만
// 구조체 : 단순한 데이터의 모음
// 클래스 : 유동적인 데이터의 모음 에 주로 사용

//int FunctionPlus(int a, int b)
//{
//    return a + b;
//}

//int main()
//{
//    tagPlayer p1;
//    cPlayer p2;
//
//    p2.Function();
//
//    return 0;
//}

int main()
{
	bool isPlaying = true;
	int nSelect;
	cPlayer player;

	while (isPlaying)
	{
		system("cls");

		cout << "이름 : " << player.GetName().c_str() << endl;
		cout << "레벨 : " << player.GetLevel() << endl;
		cout << "경험치 : " << player.GetExp() << endl;
		cout << "체력 : " << player.GetCurrHp() << " / " << player.GetMaxHp() << endl;
		cout << "공격력 : " << player.GetAtt() << endl;
		
		isPlaying = false;
	}

	system("pause");

	return 0;
}