void fun()
{
  int entity_9 = 18;
  char* entity_6;
  char entity_1[73] = "";
  entity_1 = NULL;
  memset(entity_1, 'E', 73-1);
  entity_1[73-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  strcpy(entity_6, entity_1);
}