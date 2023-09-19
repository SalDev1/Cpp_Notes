#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
protected:
    Shape() = default;
    Shape(std::string_view description);

public:
    virtual ~Shape() = default; // If destructor is not public, you won't be
                                // able to delete base_ptrs. SHOW THIS TO STUDENTS
    // Pure virtual functions
    // By doing this , this will become an abstract class meaning you won't be able to create objects of this class anymore.
    virtual double perimeter() const = 0;
    virtual double surface() const = 0;

private:
    std::string m_description;
};

#endif // SHAPE_H