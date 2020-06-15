#ifndef SHADER_H
#define SHADER_H

#include <string>
#include <GL/glew.h>

class Shader
{
    public:
        Shader(const std::string& fileName);
        virtual ~Shader();
        void Bind();

    protected:

    private:
    static const unsigned int NUM_SHADERS = 2;
        Shader(const Shader& other) {}
        void operator=(const Shader& other) {}

        GLuint m_program;
        GLuint m_shaders[NUM_SHADERS];
};

#endif // SHADER_H
