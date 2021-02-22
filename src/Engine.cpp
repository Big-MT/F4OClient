#include "Engine.h"

bool Engine::shouldClose = false;

void Engine::OnInitialize ( ) {

	LOG_INIT();

	LOG_INFO("Test message \n");
}

void Engine::OnTick ( ) {

}

void Engine::OnDestroy ( ) {

}
