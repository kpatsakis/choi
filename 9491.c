void fun()
{
  int entity_9 = 89;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(49*sizeof(char));
  entity_0[49-1]='';
  memset(entity_6, 'a', entity_9-1);
  entity_6[entity_9-1]='';
  memcpy(entity_0, entity_6, entity_9*sizeof(char));
}