#include "MemoryReader.h"
#include <QDebug>

int main(int argc, char *argv[])
{
	MemoryReader r;
	r.setData("Hello, world", 12);
	if (r.open(MemoryReader::ReadOnly)) {
		char tmp[2];
		tmp[1] = 0;
		while (r.getChar(tmp)) {
			qDebug(tmp);
		}
	}

	return 0;
}
