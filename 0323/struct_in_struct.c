#include <stdio.h>
typedef struct position {
	int xpos;
	int ypos;
}Position;

typedef struct circle {
	Position pos;
	int r;
}Circle;

int main(void) {
	Circle c;
	printf("%p %p %p %d\n", &c.pos.xpos, &c.pos.ypos, &c.r,sizeof(Circle));
	//����ü �迭 ���� �� �ʱ�ȭ
	Position arr[3] = { {10,3},{1,5},{2,5} }; //2���� �迭 �ʱ�ȭ �ϴ� �Ͱ� ����
	int i;
	for (i = 0; i < 3; i++) {
		printf("%d,%d\n", arr[i].xpos, arr[i].ypos);
	}
	//Circle �迭 3��¥�� ���� �� �ʱ�ȭ, ��ü ���
	Circle cir[3] = {
		//x,y , r
		{{3,4},10},//cir[0]
		{{6,7},5},//cir[1]
		{{8,1},6},//cir[2]
	};
	for (i = 0; i < 3; i++) {
		printf("xpos : %d, ypos : %d, r : %d\n", 
			cir[i].pos.xpos, cir[i].pos.ypos, cir[i].r);
	}
	return 0;
}









