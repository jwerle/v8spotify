
#include <spotify.h>
#include "request.h"

spotify::Request
spotify::Request::New (void *cb) {
	spotify::Request *request = new spotify::Request();
	
	if (NULL != cb) request->SetCallback(cb);

	return *request;
}


void
spotify::Request::SetCallback (void *cb) {
	callback_ = &cb;;
}