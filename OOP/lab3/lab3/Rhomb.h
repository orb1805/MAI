#ifndef RHOMB_H
#define RHOMB_H

#include <iostream>

#include "Figure.h"

class Rhomb : public Figure {
private:
	double m_diag1, m_diag2;
public:
	Rhomb(std::istream&);
	Rhomb(double, double);
	Rhomb(Rhomb&);
	void Print(std::ostream&) override;
	double Square();
	virtual ~Rhomb();

	Rhomb& operator=(const Rhomb&);
	friend std::ostream& operator<<(std::ostream&, const Rhomb&);
	friend std::istream& operator>>(std::istream&, Rhomb&);
};
#endif // !RHOMB_H