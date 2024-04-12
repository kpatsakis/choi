void fun()
{
  int entity_0 = 37;
  char entity_8[entity_0] = "";
  char* entity_9;
  memset(entity_8, 'K', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_9 = (char*)malloc(74*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_8);
}