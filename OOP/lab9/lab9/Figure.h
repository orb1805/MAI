#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

#include "Allocator.h"

class Figure {
public:
	Figure() { };
	virtual double Square() const = 0  ;
	virtual ~Figure() {}
	static void* operator new(size_t);
	static void operator delete(void*);
	static Allocator allocator;
private:
	virtual void print(std::ostream& os = std::cout) = 0;
	friend std::ostream& operator<<(std::ostream &, Figure&);
};

bool operator==(const Figure&, const Figure&);
bool operator<(const Figure&, const Figure&);
bool operator>(const Figure&, const Figure&);
bool operator<=(const Figure&, const Figure&);
bool operator>=(const Figure&, const Figure&);

#endif // !FIGURE_H