#include"head.h"
int main() {

	HideCursor();

	startUp();
	
	while (1) {

		show();
		updateWithInput();
		updateWithoutInput();
		
	}

	return 0;
}