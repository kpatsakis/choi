void fun()
{
  int entity_0 = 40;
  char* entity_9;
  char entity_8[entity_0] = "";
  memset(entity_8, 'P', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_9 = (char*)malloc(62*sizeof(char));
  entity_9[0]='0';
  entity_0 = 42;
  memcpy(entity_9, entity_8, entity_0*sizeof(char));
}