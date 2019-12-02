#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "shape.h"

class Ellipse : virtual public Shape{
public:
    Ellipse(double x = 0, double y = 0, double r_1 = 0, double r_2 = 0);
    Ellipse(QDataStream& stream);
    void saveToStream(QDataStream& stream) const override;

    void print(std::ostream& out) override;

protected:
    double radius_1;
    double radius_2;
private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};

#endif // ELLIPSE_H
