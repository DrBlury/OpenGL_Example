#include <iostream>
#include <GL/glew.h>
#include "display.h"
#include "shader.h"
#include "mesh.h"
#include "texture.h"


int main()
{
    Display display(800, 800, "Hello World!");

    Vertex verticies[] =
        {
            Vertex(glm::vec3(-0.5, -0.5, 0), glm::vec2(0.0, 0.0)),
            Vertex(glm::vec3(0.0, 0.5, 0.0), glm::vec2(0.5, 1.0)),
            Vertex(glm::vec3(0.5, -0.5, 0.0), glm::vec2(1.0, 0.0)),
        };

    Mesh mesh(verticies, sizeof(verticies)/sizeof(verticies[0]));
    Texture texture ("./res/bricks.jpg");
    Shader shader("./res/basicShader");


    while (!display.IsClosed()) {
        display.Clear(0.0f, 0.0f, 0.0f, 1.0f);
        shader.Bind();
        texture.Bind(0);
        mesh.Draw();

        display.Update();
    }

    return 0;
}
