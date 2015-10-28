#include <stdio.h>
#define MIN(a, b)	((a>b)?b:a)
int main(void) {
	int i, n;
	scanf("%d", &n);
	int height[n], width[n], thick[n], cover[n];
	for (i=0; i<n; i++) {
		scanf("%d %d %d", &height[i], &width[i], &thick[i]);
		cover[i] = MIN((width[i]*2+thick[i]),(height[i])*2) + 80;
	}
	for (i=0; i<n; i++) printf("%d\n", cover[i]);
	int min = cover[0];
	for (i=1; i<n; i++) if (min > cover[i]) min = cover[i];
	printf("%d\n", min);
	// TBD: retangle packing algorithm
}
