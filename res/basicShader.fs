#version 120

in vec2 texCoord;
uniform sampler2D diffuse;

varying out vec4 diffuseColor;

void main() {
    diffuseColor = texture2D(diffuse, texCoord);
}