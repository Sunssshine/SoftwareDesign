#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : virtual public Shape{
public:
    Circle(double x = 0, double y = 0, double r = 0);
    Circle(QDataStream& stream);
    void saveToStream(QDataStream& stream) const override;

    void print(std::ostream& out) override;

protected:
    double radius;
private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};

#endif // CIRCLE_H
