#ifndef V8_SPOTIFY_REQUEST_H
#define V8_SPOTIFY_REQUEST_H


#include "object.h"


namespace spotify {

	
	class Request : Object {
		void *callback_;


	public:
		static Request
		New(void *cb = NULL);


		void
		SetCallback (void *cb);


	};


}


#endif