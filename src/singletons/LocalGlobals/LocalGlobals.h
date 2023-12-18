#ifndef LOCALGLOBALS_H
#define LOCALGLOBALS_H

#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

namespace godot {

class LocalGlobals : public Object {
    GDCLASS(LocalGlobals, Object)

protected:
    static void _bind_methods();

public:
    LocalGlobals();
    ~LocalGlobals();
    
    void test();
};

}

#endif