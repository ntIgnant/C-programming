#include <stdio.h>


struct Point
{
	int x;
	int y;
};


void add_point(struct Point *a, struct Point *b)
{
    (*a).x += (*b).x;  // Add x-coordinates
    (*a).y += (*b).y;  // Add y-coordinates
}

int main()
{
	struct Point p = {1, 2};
	struct Point q = {3, 1};

	add_point(&p, &q); // Pass the location n memory of p and q though the function

	printf("The coordinates are: {%d, %d}\n", p.x, p.y);

	return(0);
}