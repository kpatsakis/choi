void fun()
{
  int entity_9 = 19;
  char entity_7[73] = "";
  entity_7 = NULL;
  char entity_3 = 'r';
  char* entity_0;
  memset(entity_7, 'p', 73-1);
  entity_7[73-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  entity_9 = 73;
  strcpy(entity_0, entity_7);
}