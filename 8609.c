void fun()
{
  int entity_0 = 96;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[45-1]='';
  memset(entity_8, 'J', entity_0-1);
  entity_8[entity_0-1]='';
  memcpy(entity_9, entity_8, entity_0*sizeof(char));
}