#include "server.h"
#include "../lib/base64.h"
#include "../lib/blackJack.h"
#include "../lib/blackJackServer.h"

// ##################### Register Endpoints ##################### //
void registerEndpointsForServer(EndpointList *endpoints) {

	registerEndpoint(endpoints, "/create-game", POST, handleCreateGame);
	registerEndpoint(endpoints, "/join-game", POST, handleJoinGame);
	registerEndpoint(endpoints, "/start-game", POST, handleStartGame);
    registerEndpoint(endpoints, "/hit", POST, handleHit);
    registerEndpoint(endpoints, "/game-status", GET, handleCheckGameStatus);
}
