void fun()
{
  int entity_1 = 15;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'L', entity_1-1);
  entity_9[entity_1-1]='';
  entity_5 = (char*)malloc(81*sizeof(char));
  entity_5[81-1]='';
  entity_1 = 11;
  strcpy(entity_5, entity_9);
}