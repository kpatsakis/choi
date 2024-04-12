void fun()
{
  int entity_9 = 26;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_0;
  memset(entity_8, 'J', entity_9-1);
  entity_8[entity_9-1]='';
  entity_0 = (char*)malloc(88*sizeof(char));
  entity_0[88-1]='';
  entity_9 = 7;
  memcpy(entity_0, entity_8, entity_9*sizeof(char));
}