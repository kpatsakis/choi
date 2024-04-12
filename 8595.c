void fun()
{
  int entity_9 = 1;
  entity_9 = 40;
  char* entity_8;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  memset(entity_0, 'b', entity_9-1);
  entity_0[entity_9-1]='';
  entity_8 = (char*)malloc(88*sizeof(char));
  entity_8[88-1]='';
  memcpy(entity_8, entity_0, entity_9*sizeof(char));
}