#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pwd.h>

  int main(int argc, char const *argv[])
  {
    struct passwd* pw;

    if( ( pw = getpwuid( getuid() ) ) == NULL )
    {
       fprintf( stderr,"getpwuid: no password entry\n" );
       return( EXIT_FAILURE );
    }
    printf( "login name    %s\n", pw->pw_name );
    printf( "user password %s\n", pw->pw_passwd );
    printf( "user id       %d\n", pw->pw_uid );
    printf( "group id      %d\n", pw->pw_gid );
    printf( "home dir      %s\n", pw->pw_dir );
    printf( "login shell   %s\n", pw->pw_shell );
    return( EXIT_SUCCESS );
  }
