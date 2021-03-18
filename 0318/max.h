//중복 include를 피하는 방법, #pragma once, #ifndef #define을 이용하는 방법
#pragma once

// #define으로 __MAX_H__ 가 선언되어 있는지? 
// 선언되어 있지 않으면 true 선언되어 있으면 false
#ifndef __MAX_H__ 
#define __MAX_H__

int MaxNumber(int n1, int n2) {
	return n1 > n2 ? n1 : n2;
}

#endif