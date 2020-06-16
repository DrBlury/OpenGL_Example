#version 120

attribute vec3 position;
attribute vec2 texCoordIn;

varying out vec2 texCoord;

void main() {
	texCoord = texCoordIn;
    gl_Position = vec4(position, 1.0);
}