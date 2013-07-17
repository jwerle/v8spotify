
#include <spotify.h>
#include "session.h"

static spotify::Object *current_session = NULL;

spotify::Object
spotify::Session::New () {
	spotify::Object *session = spotify::Object::New();
	sp_session *s_session;
	session->SetRef(s_session);

	return *session;
}



spotify::Object
spotify::Session::GetCurrent () {
	if (NULL != current_session) return *current_session;
	else return spotify::Session::New();
}