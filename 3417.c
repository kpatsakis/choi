void fun()
{
  int entity_5 = 1;
  char* entity_6;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(28*sizeof(char));
  entity_6[28-1]='';
  memset(entity_9, 'l', entity_5-1);
  entity_9[entity_5-1]='';
  entity_5 = 72;
  memcpy(entity_6, entity_9, entity_5*sizeof(char));
}