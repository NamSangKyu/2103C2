//�ߺ� include�� ���ϴ� ���, #pragma once, #ifndef #define�� �̿��ϴ� ���
#pragma once

// #define���� __MAX_H__ �� ����Ǿ� �ִ���? 
// ����Ǿ� ���� ������ true ����Ǿ� ������ false
#ifndef __MAX_H__ 
#define __MAX_H__

int MaxNumber(int n1, int n2) {
	return n1 > n2 ? n1 : n2;
}

#endif