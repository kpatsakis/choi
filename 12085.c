void fun()
{
  int entity_0 = 71;
  char* entity_8;
  char entity_6[entity_0] = "";
  entity_8 = (char*)malloc(89*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'y', entity_0-1);
  entity_6[entity_0-1]='0';
  memcpy(entity_8, entity_6, entity_0*sizeof(char));
}