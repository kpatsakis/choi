void fun()
{
  int entity_6 = 46;
  char* entity_9;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'v', entity_6-1);
  entity_4[entity_6-1]='';
  entity_9 = (char*)malloc(66*sizeof(char));
  entity_9[66-1]='';
  strcpy(entity_9, entity_4);
}