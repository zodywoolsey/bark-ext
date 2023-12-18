#ifndef matrix_H
#define matrix_H

#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

namespace godot {

class matrix : public Object {
    GDCLASS(matrix, Object)

protected:
    static void _bind_methods();

public:
    matrix();
    ~matrix();
    
    void test();
};

}

#endif