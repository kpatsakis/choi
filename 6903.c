void fun()
{
  int entity_1 = 80;
  entity_1 = 80;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'i', entity_1-1);
  entity_4[entity_1-1]='';
  entity_9 = (char*)malloc(11*sizeof(char));
  entity_9[11-1]='';
  strcpy(entity_9, entity_4);
}