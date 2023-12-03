#include "PrintClass.h"

std::ostream& operator<<(std::ostream& os, const PrintClass& p) {
	p.printFunc();
	return os;
}