#include <stdio.h>
#include  <stdlib.h>
#include <stdbool.h>
#define MAX 1000000000000000000
typedef struct {
	int type;
	int attack;
	int health;
}ROOM;

int main() {

	//input
	int n, H_ATK;
	scanf("%d %d", &n, &H_ATK);
	ROOM* rooms = (ROOM*)malloc(sizeof(ROOM) * n);
	for (size_t i = 0; i < n; i++)
		scanf("%d %d %d", &rooms[i].type, &rooms[i].attack, &rooms[i].health);

	unsigned long long low = 0, high = MAX;
	bool alive = true;
	while (low <= high) {

		alive = true;
		unsigned long long mid = low + (high - low) / 2;
		unsigned long long H_CurHP = mid;
		unsigned long long H_CurATK = H_ATK;
		//printf("low %ld mid %ld high %ld\n", low, mid, high);
		for (size_t i = 0; i < n && alive; i++) {
			if (rooms[i].type == 1) {
				int M_HP = rooms[i].health;
				int M_ATTACK = rooms[i].attack;
				unsigned long long M_dieTurn = M_HP / H_CurATK + ((M_HP % H_CurATK) > 0 ? 1 : 0);
				unsigned long long H_dieTurn = H_CurHP / M_ATTACK + ((H_CurHP % M_ATTACK) > 0 ? 1 : 0);
				// 로그 추가
				//printf("M_HP: %d, M_ATTACK: %d, M_dieTurn: %d\n", M_HP, M_ATTACK, M_dieTurn);
				//printf("H_CurHP: %lld, H_CurATK: %d, H_dieTurn: %d\n", H_CurHP, H_CurATK, H_dieTurn);
				if (M_dieTurn <= H_dieTurn) {//생존
					H_CurHP -= M_ATTACK * (M_dieTurn - 1);
				}
				else {
					alive = false;
				}
			}
			else {
				H_CurHP = H_CurHP + rooms[i].health > mid ? mid : H_CurHP + rooms[i].health;
				H_CurATK += rooms[i].attack;
			}
		}

		if (alive) high = mid - 1;
		else low = mid + 1;

	}

	printf("%lld", low);


	return 0;
}
