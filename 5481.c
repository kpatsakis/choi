void fun()
{
  int entity_5 = 36;
  int entity_9 = 29;
  char* entity_4;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  memset(entity_6, 'r', entity_9-1);
  entity_6[entity_9-1]='';
  entity_4 = (char*)malloc(93*sizeof(char));
  entity_4[93-1]='';
  entity_9 = 94;
  strcpy(entity_4, entity_6);
}