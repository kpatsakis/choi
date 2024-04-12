void fun()
{
  int entity_1 = 53;
  char* entity_9;
  char entity_5[33] = "";
  entity_5 = NULL;
  memset(entity_5, 'f', 33-1);
  entity_5[33-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  strcpy(entity_9, entity_5);
}