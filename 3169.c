void fun()
{
  int entity_0 = 31;
  int entity_3 = 72;
  entity_0 = 87;
  char* entity_4;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(47*sizeof(char));
  entity_4[47-1]='';
  memset(entity_9, 'F', entity_0-1);
  entity_9[entity_0-1]='';
  memcpy(entity_4, entity_9, entity_0*sizeof(char));
}