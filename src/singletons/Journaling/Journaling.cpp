#include "Journaling.h"

using namespace godot;

void Journaling::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("method_name"), &ClassName::method_name);
	ClassDB::bind_method(D_METHOD("test"), &Journaling::test);
}

Journaling::Journaling() {
}

Journaling::~Journaling() {
}

void Journaling::test() {
	UtilityFunctions::print("Hello from Journaling!");
}