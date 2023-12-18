#include "LocalGlobals.h"

using namespace godot;

void LocalGlobals::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("method_name"), &ClassName::method_name);
	ClassDB::bind_method(D_METHOD("test"), &LocalGlobals::test);
}

LocalGlobals::LocalGlobals() {
}

LocalGlobals::~LocalGlobals() {
}

void LocalGlobals::test() {
	UtilityFunctions::print("Hello from LocalGlobals!");
}