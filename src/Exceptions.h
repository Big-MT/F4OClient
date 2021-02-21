#ifndef FALLOUTSBXCLIENT_EXCEPTIONS_H
#define FALLOUTSBXCLIENT_EXCEPTIONS_H

#include <Windows.h>
#include <stdexcept>


namespace Exceptions {

	class RuntimeException : public std::runtime_error
	{
	public:
		explicit RuntimeException(const std::string &msg) :
				std::runtime_error(msg.c_str())
		{ }

		explicit RuntimeException(const char *msg) :
				std::runtime_error(msg)
		{ }
	};

	class DetourException : public RuntimeException
	{
	public:
		explicit DetourException(const std::string &msg) :
				RuntimeException(msg.c_str())
		{ }

		explicit DetourException(const char *msg) :
				RuntimeException(msg)
		{ }
	};



}

#endif //FALLOUTSBXCLIENT_EXCEPTIONS_H
