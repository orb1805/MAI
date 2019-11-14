#ifndef RHOMB_H
#define RHOMB_H

#include <iostream>

#include "Figure.h"
#include "Allocator.h"

class Rhomb : public Figure {
private:
	double m_diag1, m_diag2;
	void print(std::ostream&) override;
public:
	Rhomb(std::istream&);
	Rhomb(double, double);
	Rhomb(Rhomb&);
	double Square();
	virtual ~Rhomb();

	//static void* operator new(size_t, Allocator&);
	//void operator delete(void*, Allocator&);
	Rhomb& operator=(const Rhomb&);
	friend std::istream& operator>>(std::istream&, Rhomb&);
};
#endif // !RHOMB_H