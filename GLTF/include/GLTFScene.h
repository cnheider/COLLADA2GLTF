#pragma once

#include <vector>

#include "GLTFNode.h"
#include "GLTFObject.h"

namespace GLTF {
  class Scene : GLTF::Object {
  public:
      std::vector<GLTF::Node*>* nodes;

	  Scene();
  };
}
