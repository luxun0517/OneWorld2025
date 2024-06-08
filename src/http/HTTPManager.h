//
// Created by Harris.Lu on 2024/6/8.
//

#ifndef ONEWORLD2025_HTTPMANAGER_H
#define ONEWORLD2025_HTTPMANAGER_H

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <glm/glm.hpp>

using namespace godot;
namespace CesiumForGodot {

class HTTPManager : public Node {
	GDCLASS(HTTPManager, Node)

public:
	HTTPManager();
	~HTTPManager();

protected:
	static void _bind_methods();
};

} //namespace CesiumForGodot

#endif //ONEWORLD2025_HTTPMANAGER_H
