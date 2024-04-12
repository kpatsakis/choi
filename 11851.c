void fun()
{
  int entity_4 = 43;
  char* entity_5;
  char entity_0[60] = "";
  char entity_8[76] = "";
  memset(entity_0, 'r', 60-1);
  entity_0[60-1]='0';
  memset(entity_8, 'e', 76-1);
  entity_8[76-1]='0';
  entity_5 = (char*)malloc(46*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_0, 60*sizeof(char));
}