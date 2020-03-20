// 학생의 성적이 입력된 배열을 높은 순으로 정렬
#include <stdio.h>

int main() {
	int std2[5] = {90,70,80,50,30};
	for (int i = 0; i < 4; i++) {
		if (std2[i] < std2[i+1]) {
			int temp = std2[i+1];
			std2[i+1] = std2[i];
			std2[i] = temp;
		}
	}
	for (int g = 0; g < 5;g++) {
		printf("%d ", std2[g]);

	}
	return 0;
}