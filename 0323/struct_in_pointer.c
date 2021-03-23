#include <stdio.h>
typedef struct position {
	int xpos;
	int ypos;
	struct position* next;
}Position;
int main(void) {
	Position p1 = { 1,2,NULL };
	Position p2 = { 3,5,NULL };
	Position p3 = { 7,0,NULL };
	p1.next = &p2;
	p2.next = &p3;
	
	Position* p = &p1;
	printf("%d, %d\n", p->xpos, p->ypos);
	p = p->next;
	printf("%d, %d\n", p->xpos, p->ypos);
	p = p->next;
	printf("%d, %d\n", p->xpos, p->ypos);




	return 0;
}