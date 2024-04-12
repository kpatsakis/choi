void fun()
{
  int entity_7 = 75;
  char* entity_9;
  char entity_1[69] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_1, 'x', 69-1);
  entity_1[69-1]='';
  strcpy(entity_9, entity_1);
}