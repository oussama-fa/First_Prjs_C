#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
    int length;
    int width;
    int height;
};

typedef struct box box;

int get_volume(box b) {
	int volume = b.height * b.length * b.width;
	return (volume);
}

int is_lower_than_max_height(box b) {
	if (b.height < MAX_HEIGHT || b.height < 0)
		return (-1);
	return (0);
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}