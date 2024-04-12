void fun()
{
  int entity_6 = 83;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 'J', entity_6-1);
  entity_9[entity_6-1]='';
  entity_4 = (char*)malloc(51*sizeof(char));
  entity_4[51-1]='';
  strcpy(entity_4, entity_9);
}