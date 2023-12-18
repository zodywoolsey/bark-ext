#include "bark_helpers.h"

using namespace godot;

void BarkHelpers::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("method_name"), &ClassName::method_name);
	ClassDB::bind_method(D_METHOD("test"), &BarkHelpers::test);
}

BarkHelpers::BarkHelpers() {
}

BarkHelpers::~BarkHelpers() {
}

void BarkHelpers::test() {
	UtilityFunctions::print("Hello from BarkHelpers!");
}