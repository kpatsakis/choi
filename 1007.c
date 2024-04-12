void fun()
{
  int entity_5 = 94;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(93*sizeof(char));
  entity_1[93-1]='';
  memset(entity_9, 'I', entity_5-1);
  entity_9[entity_5-1]='';
  strcpy(entity_1, entity_9);
}