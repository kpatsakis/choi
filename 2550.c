void fun()
{
  int entity_9 = 78;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_8;
  memset(entity_0, 'y', entity_9-1);
  entity_0[entity_9-1]='';
  entity_8 = (char*)malloc(47*sizeof(char));
  entity_8[47-1]='';
  memcpy(entity_8, entity_0, entity_9*sizeof(char));
}