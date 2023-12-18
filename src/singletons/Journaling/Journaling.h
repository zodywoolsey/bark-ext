#ifndef JOURNALING_H
#define JOURNALING_H

#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

namespace godot {

class Journaling : public Object {
    GDCLASS(Journaling, Object)

protected:
    static void _bind_methods();

public:
    Journaling();
    ~Journaling();
    
    void test();
};

}

#endif