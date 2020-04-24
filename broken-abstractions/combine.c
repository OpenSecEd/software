char buf[128];

void
combine( char *s1, size_t len1, char *s2, size_t len2)
{
  if ( len1 + len2 + 1 <= sizeof(buf) ) {
    strncpy( buf, s1, len1 );
    strncat( buf, s2, len2 );
  }
}
