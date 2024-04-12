void fun()
{
  int entity_6 = 61;
  char* entity_9;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  entity_9 = (char*)malloc(28*sizeof(char));
  entity_9[28-1]='';
  memset(entity_5, 'I', entity_6-1);
  entity_5[entity_6-1]='';
  entity_6 = 71;
  memcpy(entity_9, entity_5, entity_6*sizeof(char));
}