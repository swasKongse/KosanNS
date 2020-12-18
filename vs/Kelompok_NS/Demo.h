#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, stexture, stexture2,			
		tVBO3, tVAO3, tEBO3, ttexture3, stexture3,
		tVBO4, tVAO4, tEBO4, ttexture4, stexture4,
		tVBO5, tVAO5, tEBO5, ttexture5, stexture5,
		tVBO6, tVAO6, tEBO6, ttexture6, stexture6,
		tVBO7, tVAO7, tEBO7, ttexture7, stexture7,
		tVBO8, tVAO8, tEBO8, ttexture8, stexture8,
		tVBO9, tVAO9, tEBO9, ttexture9, stexture9,
		tVBO10, tVAO10, tEBO10, ttexture10, stexture10;

	GLuint activeProgram;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	void ActiveShaderProgram();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildMeja();
	void BuildLantai();
	void DrawMeja();
	void DrawLantai();
	void BuildDinding();
	void DrawDinding();
	void BuildAtap();
	void DrawAtap();
	void BuildDindingDepan();
	void DrawDindingDepan();
	void BuildLemari();
	void DrawLemari();
	void BuildLemariDepan();
	void DrawLemariDepan();
	void BuildKasur();
	void DrawKasur();
	void BuildKulkas();
	void DrawKulkas();
	void BuildKulkasDepan();
	void DrawKulkasDepan();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};