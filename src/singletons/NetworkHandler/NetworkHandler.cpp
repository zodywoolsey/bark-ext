#include "NetworkHandler.h"

using namespace godot;

void NetworkHandler::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("method_name"), &ClassName::method_name);
	ClassDB::bind_method(D_METHOD("test"), &NetworkHandler::test);
}

NetworkHandler::NetworkHandler() {
}

NetworkHandler::~NetworkHandler() {
}

void NetworkHandler::test() {
	UtilityFunctions::print("Hello from NetworkHandler!");
}