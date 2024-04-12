void fun()
{
  int entity_3 = 12;
  char* entity_9;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(66*sizeof(char));
  entity_9[66-1]='';
  memset(entity_1, 'w', entity_3-1);
  entity_1[entity_3-1]='';
  entity_3 = 62;
  strcpy(entity_9, entity_1);
}