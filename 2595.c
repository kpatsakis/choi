void fun()
{
  int entity_8 = 7;
  char* entity_9;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'E', entity_8-1);
  entity_1[entity_8-1]='';
  entity_9 = (char*)malloc(23*sizeof(char));
  entity_9[23-1]='';
  strcpy(entity_9, entity_1);
}