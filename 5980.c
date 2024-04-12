void fun()
{
  int entity_3 = 72;
  entity_3 = 46;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[59-1]='';
  memset(entity_9, 'C', entity_3-1);
  entity_9[entity_3-1]='';
  memcpy(entity_0, entity_9, entity_3*sizeof(char));
}