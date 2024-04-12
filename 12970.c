void fun()
{
  int entity_7 = 100;
  char entity_8[entity_7] = "";
  char* entity_0;
  char* entity_6;
  memset(entity_8, 'L', entity_7-1);
  entity_8[entity_7-1]='0';
  entity_6 = (char*)malloc(46*sizeof(char));
  entity_6[0]='0';
  entity_0 = (char*)malloc(8*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_6, entity_8, entity_7*sizeof(char));
}