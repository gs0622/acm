#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node {
	int vertex;
	struct node *next;
	int adjs;
} Node;
int main(void) {
	int n, ret;
	Node *nodes;
	while (scanf("%d", &n)!=EOF) {
		int vertex, edges, i, ans = 0;
		Node nodes[n];
		for (i=0; i<n; i++) {
			ret = scanf("%d:(%d)", &vertex, &edges);
			nodes[i].vertex = vertex;
			nodes[i].next = NULL;
			nodes[i].adjs = 0;
			if (edges > 0) {
				int j, adj;
				Node *p = &nodes[i];
				for (j=0; j<edges; j++) {
					ret = scanf("%d", &adj);
					nodes[i].adjs++;
					p->next = malloc(sizeof(Node));
					p->next->vertex = adj;
					p->next->next = NULL;
					//printf("%d->%d: %d\n", vertex, adj, nodes[i].adjs);
					p = p->next;
					
				}
			}
		}
		for (i=0; i<n; i++) {
			printf("%d: %d\n", nodes[i].vertex, nodes[i].adjs);
			if (nodes[i].adjs > 1) ans++;
		}
		printf("%d\n", ans);
		// clean
		for (i=0; i<n; i++) {
			if (nodes[i].next) {
				Node *p = &nodes[i], *q;
				while (p->next) {
					while (p->next) q = p, p = p->next;
					free(p);
					q->next = NULL, p = &nodes[i];
				}
			}
		}
	}
	return 0;
}
