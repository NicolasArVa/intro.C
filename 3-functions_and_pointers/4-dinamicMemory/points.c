#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    // Fill in your main function here
    struct point *polygon;
    int vertices;

    scanf("%d", &vertices);
    polygon = (struct point *)malloc(vertices*sizeof(struct point));

    initializePoly(polygon, vertices);
    printPoly(polygon, vertices);

    free(polygon);
    return 0;
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly (struct point *pointArray, int n) {
    for(int i=0; i<n; i++) {
        pointArray[i].x = -i;
        pointArray[i].y = i*i;
    }
}