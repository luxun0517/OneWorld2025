//
// Created by Harris.Lu on 2024/6/8.
//

#include "HTTPManager.h"

namespace CesiumForGodot {
HTTPManager::HTTPManager() {
	UtilityFunctions::print(vformat("HTTPManager %f" , glm::sin(10)));
}

HTTPManager::~HTTPManager() {

}

void HTTPManager::_bind_methods() {

}

} //namespace CesiumForGodot