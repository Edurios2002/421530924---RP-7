#pragma once
#include<stdio.h>
#include<glew.h>
#include<glfw3.h>

class Window
{
public:
	Window();
	Window(GLint windowWidth, GLint windowHeight);
	int Initialise();
	GLfloat getBufferWidth() { return bufferWidth; }
	GLfloat getBufferHeight() { return bufferHeight; }
	GLfloat getXChange();
	GLfloat getYChange();
	GLfloat getmueve_helicoptero() { return mueve_helicoptero; }
	GLfloat getmuevex() { return muevex; }
	GLfloat getvalor() { return valor; }
	GLfloat getvalor1() { return valor1; }
	GLfloat getarticulacion_capo() { return articulacion_capo; }

	bool getShouldClose() {
		return  glfwWindowShouldClose(mainWindow);}
	bool* getsKeys() { return keys; }
	void swapBuffers() { return glfwSwapBuffers(mainWindow); }
	
	~Window();
private: 
	GLFWwindow *mainWindow;
	GLint width, height;
	bool keys[1024];
	GLint bufferWidth, bufferHeight;
	void createCallbacks();
	GLfloat lastX;
	GLfloat lastY;
	GLfloat xChange;
	GLfloat yChange;
	GLfloat mueve_helicoptero;
	GLfloat muevex;
	GLfloat valor;
	GLfloat valor1;

	GLint K = 0;
	GLint luz_del = 1;
	GLint luz_tras = 0;
	GLfloat anguK = 0.0f;
	GLfloat avanza_retrocede, articulacion_avanza, articulacion_capo, articulacion_reversa;



	bool mouseFirstMoved,Enciende;
	static void ManejaTeclado(GLFWwindow* window, int key, int code, int action, int mode);
	static void ManejaMouse(GLFWwindow* window, double xPos, double yPos);

};

