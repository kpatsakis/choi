void fun()
{
  int entity_6 = 94;
  char* entity_4;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  memset(entity_9, 'y', entity_6-1);
  entity_9[entity_6-1]='';
  entity_4 = (char*)malloc(28*sizeof(char));
  entity_4[28-1]='';
  memcpy(entity_4, entity_9, entity_6*sizeof(char));
}