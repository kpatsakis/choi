void fun()
{
  int entity_3 = 38;
  char* entity_7;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'D', entity_3-1);
  entity_9[entity_3-1]='';
  entity_7 = (char*)malloc(33*sizeof(char));
  entity_7[33-1]='';
  entity_3 = 39;
  strcpy(entity_7, entity_9);
}