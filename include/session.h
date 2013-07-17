#ifndef V8_SPOTIFY_H
#define V8_SPOTIFY_H


#include "v8spotify.h"
#include "object.h"


namespace spotify {


	class Session {
	public:
		static Object
		New();

		static Object
		GetCurrent();
	};


}


#endif