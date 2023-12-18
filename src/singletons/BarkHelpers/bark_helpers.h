#ifndef BARKHELPERS_H
#define BARKHELPERS_H

#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

namespace godot {

class BarkHelpers : public Object {
    GDCLASS(BarkHelpers, Object)

protected:
    static void _bind_methods();

public:
    BarkHelpers();
    ~BarkHelpers();
    
    void test();
};

}

#endif