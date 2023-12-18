#include "matrix.h"

using namespace godot;

void matrix::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("method_name"), &ClassName::method_name);
	ClassDB::bind_method(D_METHOD("test"), &matrix::test);
}

matrix::matrix() {
}

matrix::~matrix() {
}

void matrix::test() {
	UtilityFunctions::print("Hello from matrix!");
}