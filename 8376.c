void fun()
{
  int entity_9 = 44;
  entity_9 = 49;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(6*sizeof(char));
  entity_7[6-1]='';
  memset(entity_0, 'b', entity_9-1);
  entity_0[entity_9-1]='';
  memcpy(entity_7, entity_0, entity_9*sizeof(char));
}