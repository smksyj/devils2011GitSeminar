#include "smksyj.h"

int smksyjCmd(int argc, char (*argv)[ARG_SIZE]) {
	int flag = atoi(argv);

	cout << "³»°¡ ÀÔÂûÇÑ Åä·ýÁÖ±« »óÈ¸ ÀÔÂû ÇÏÁö ¸¶¶ó" << endl;

	if ( flag == 22 ) {
		cout << "¿ÜÃÄ!!! EE!!!" << endl;
		cout << "½Ø³¢... ÀÌ¹ø¸¸ ºÁÁØ´Ù" << endl;
		cout << "·æ°³Â¹ÀÀ..." << endl;

		return 0;
	}

	cout << "²¨Á® ÀÌ º´½Å¾Æ" << endl;

	return 0;
}