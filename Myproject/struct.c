#include <stdio.h>




struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
};

typedef struct GameInfomation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
} GAME_INFO;

int main_struct(void)
{

	// [게임 출시]
	// 이름 : 나도 게임
	// 발매 연도: 2017년
	// 가격 : 50원
	// 제작사 : 나도 회사

	char* name = "나도게임";
	int year = 2017;
	int price = 50;
	char* company = "나도회사";

	// 또다른 게임 출시]
	// 이름 : 너도 게임
	// 발매 연도: 2017년
	// 가격 : 100원
	// 제작사 : 너도 회사

	char* name2 = "나도게임";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "너도회사";

	/// 구조체 사용

	struct GameInfo gameInfo1;
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

	/// 구조체 출력



	printf("%s\n", gameInfo1.name);
	printf("%d\n", gameInfo1.year);
	printf("%d\n", gameInfo1.price);
	printf("%s\n", gameInfo1.company);

	printf("\n");
	printf("\n");

	/// 구조체를 배열처럼 초기화

	struct GameInfo gameInfo2 = {"너도게임", 2017, 100, "너도회사"};

	printf("%s\n", gameInfo2.name);
	printf("%d\n", gameInfo2.year);
	printf("%d\n", gameInfo2.price);
	printf("%s\n", gameInfo2.company);

	printf("\n");
	printf("\n");


	// 구조체 배열
	struct GameInfo gameArray[2] = {
		{"나도게임", 2017, 50, "나도회시"},
		{"너도게임", 2017, 100, "너도회사"}
	};

	// 구조체 포인터
	struct GameInfo * gamePtr; // 미션맨
	gamePtr = &gameInfo1;

	printf("%s\n", gamePtr->name);
	printf("%d\n", gamePtr->year);
	printf("%d\n", gamePtr->price);
	printf("%s\n", gamePtr->company);


	printf("\n");
	printf("\n");
	// 연관업체 
	gameInfo1.friendGame = &gameInfo2;

	printf("%s\n", gameInfo1.friendGame->name);
	printf("%d\n", gameInfo1.friendGame->year);
	printf("%d\n", gameInfo1.friendGame->price);
	printf("%s\n", gameInfo1.friendGame->company);


	// typedef
	// 자료형에 별명 지정
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3; 

	실수 실수변수 = 3.23f;
	printf("%d, %.2f", 정수변수, 실수변수);


	typedef struct GameInfo 게임정보;

	게임정보 game1;
	game1.name = "한글 게임";
	game1.year = 2015;

	GAME_INFO game2;
	game2.name = "영어 게임";
	game2.year = 2017;

	return 0;

}