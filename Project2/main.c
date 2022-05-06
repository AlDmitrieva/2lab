#include "List.h"


int test() {

	list_t* list = NULL;

	if (NULL != findel(list, 2)) {
		return 1;
	}

	if (NULL != findel(list, 32)) {
		return 2;
	}

	list = init();
	if (NULL == list) {
		return 3;
	}

	if (NULL == findel(list, 2)) {
		return 4;
	}

	if (NULL == addel(list, 32)) {
		return 5;
	};

	if (NULL == findel(list, 32)) {
		return 6;
	}

	if (NULL != delel(list, 32)) {
		return 7;
	}


	return 0;
};

int main(int argc, char** argv) {


	if (argv[1] != NULL) {
		list_t* list = NULL;
		list = init();
		add_from_file(list, argv[1]);
		return 0;
	}

	return test();
}