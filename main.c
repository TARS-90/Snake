#include <stdio.h>
#include <SDL2/SDL.h>
#include <unistd.h>

#define SIZE 20	// size of one block 
#define WIN_WIDTH  900
#define WIN_HEIGHT 600

enum Direction { UP, DOWN, LEFT, RIGHT };

struct Game {
	int width;
	int height;
	int is_end;
};

struct Node {
	int x;
	int y;
	struct Node* next;
};

struct Snake {
	struct Node* head;
	enum Direction direction;	
	int length;  
};

void add_node(struct Snake* snake, int x, int y) {
	struct Node* tmp = snake->head;
	struct Node* new = malloc(sizeof(struct Node));
	new->x = x;
	new->y = y;

	while (tmp != NULL) {
		tmp = tmp->next;
	}

	tmp->next = new;
	snake->length++;
}
void init_snake(struct Snake* snake) {
	const int length = 5;	// starting length
	enum Direction direction;
	int x, y;

	for (int i = 0; i < length; i++) {
		if (i == 0) {
			struct Node* head = malloc(sizeof(struct Node));
			head->x = x;
			head->y = y;
			snake->direction = direction;
			snake->head = head;
			snake->length = 1;
		}
		else {
			// TODO
		}
	}
}

int main() {
	SDL_Window* window = SDL_CreateWindow(
		"Snake",			// title	
		SDL_WINDOWPOS_CENTERED,		// horizontal position	
		SDL_WINDOWPOS_CENTERED,		// vertical position  
		WIN_WIDTH,			// window width
		WIN_HEIGHT,			// window height
		SDL_WINDOW_SHOWN		// window is shown
	);
	SDL_Event event;
	SDL_Surface* main_surface = SDL_GetWindowSurface(window);
	struct Game game = {
		(WIN_WIDTH - 2) / SIZE,
		(WIN_HEIGHT - 2) / SIZE,
		0
	};
	


	// game loop
	while (!game.is_end) {

	}

	SDL_Delay(3000);
	return 0;
}
