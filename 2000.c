#include <stdio.h>
#define MAX(a, b)	((a>b)?a:b)
#define MIN(a, b)	((a>b)?b:a)
int ffdh(int h, int w) {
	static int H = 0, W = 0;
	int min = MIN(w, h), max = MAX(w, h);
	if (H + min < 1800) H += min, W = max;
	else H = min, W += max;
	return W;
}
int main(void) {
	int i, n, min;
	scanf("%d", &n);
	int height[n], width[n], thick[n], H[n], W[n];
	for (i=0; i<n; i++) {
		scanf("%d %d %d", &height[i], &width[i], &thick[i]);
		H[i] = width[i]*2 + thick[i] + 80;
		W[i] = height[i];
	}
	//for (i=0; i<n; i++) printf("%d %d\n", H[i], W[i]);
	for (i=0; i<n; i++) min = ffdh(H[i], W[i]);
	printf("%d\n", min);
	// TBD: retangle packing algorithm
}
