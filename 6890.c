void fun()
{
  int entity_5 = 79;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[60-1]='';
  memset(entity_6, 'G', entity_5-1);
  entity_6[entity_5-1]='';
  strcpy(entity_9, entity_6);
}