int
login( void )
{
  char correct_password[] = "swordfish";
  char user_password[16] = {0};

  printf( "user password: ");
  fscanf( "\%s", user_password );

  if ( !strcmp( correct_password, user_password ) )
    return 0;
  return 1;
}
