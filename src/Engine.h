#ifndef FALLOUTSBXCLIENT_ENGINE_H
#define FALLOUTSBXCLIENT_ENGINE_H

#include "Log.h"

class Engine {
public:
	static bool shouldClose;
public:
	static void OnInitialize();

	static void OnTick();

	static void OnDestroy();
};


#endif //FALLOUTSBXCLIENT_ENGINE_H
