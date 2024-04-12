void fun()
{
  int entity_9 = 37;
  char* entity_1;
  char entity_8[30] = "";
  entity_8 = NULL;
  memset(entity_8, 'B', 30-1);
  entity_8[30-1]='';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  strcpy(entity_1, entity_8);
}