#pragma once

#include <glm/glm.hpp>
#include <iostream>
#include "ModelTriangle.h"
#include "Colour.h"

struct RayTriangleIntersection {
	glm::vec3 intersectionPoint;
	float distanceFromCamera;
	ModelTriangle intersectedTriangle;
	Colour colour;
	size_t triangleIndex;
	glm::vec3 normal;

	RayTriangleIntersection();
	RayTriangleIntersection(const glm::vec3 &point, float distance, const ModelTriangle &triangle, size_t index);
	friend std::ostream &operator<<(std::ostream &os, const RayTriangleIntersection &intersection);
};
