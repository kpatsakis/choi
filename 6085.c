void fun()
{
  int entity_8 = 72;
  int entity_3 = 61;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'y', entity_8-1);
  entity_9[entity_8-1]='';
  entity_5 = (char*)malloc(93*sizeof(char));
  entity_5[93-1]='';
  strcpy(entity_5, entity_9);
}