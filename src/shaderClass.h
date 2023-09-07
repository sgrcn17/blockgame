#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
    Shader(const char* vertexPath, const char* fragmentPath);
    
	std::string GetFileContents(const char* filename);

	void Use();
    
	void SetBool(const std::string &name, bool value) const;
	void SetInt(const std::string &name, int value) const;    
	void SetFloat(const std::string &name, float value) const;

private:
	unsigned int ID;
};
#endif