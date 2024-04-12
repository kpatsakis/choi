void fun()
{
  int entity_7 = 78;
  char entity_4[43] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_4, 'K', 43-1);
  entity_4[43-1]='';
  strcpy(entity_9, entity_4);
}