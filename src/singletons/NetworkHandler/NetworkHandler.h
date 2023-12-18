#ifndef NETWORKHANDLER_H
#define NETWORKHANDLER_H

#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

namespace godot {

class NetworkHandler : public Object {
    GDCLASS(NetworkHandler, Object)

protected:
    static void _bind_methods();

public:
    NetworkHandler();
    ~NetworkHandler();
    
    void test();
};

}

#endif