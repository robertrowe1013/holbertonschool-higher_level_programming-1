#include <stdio.h>
#include <stdlib.h>
#include "/usr/include/python3.5/Python.h"

/**
 * print_python_list - function to print information about Python lists
 * @p: PyObject to get information from
 */

void print_python_list(PyObject *p)
{
	int size = 0;
	PyListObject *list_item = (PyListObject *)p;

	printf("[*] Python list info\n");
	size = list_item->allocated;
	printf("[*] Size of the Python List = %d\n", size);
}

/**
 * print_python_bytes - function to print information about Python bytes
 * @p: PyObject to get information from
 */

void print_python_bytes(PyObject *p)
{
	(void)p;
}

/**
 * print_python_float - function to print information about Python floats
 * @p: PyObject to get information from
 */

void print_python_float(PyObject *p)
{
	(void)p;
}
