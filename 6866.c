void fun()
{
  int entity_6 = 38;
  int entity_1 = 17;
  char entity_9[73] = "";
  entity_9 = NULL;
  char* entity_8;
  char entity_2 = 'E';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memset(entity_9, 'S', 73-1);
  entity_9[73-1]='';
  entity_1 = 1;
  strcpy(entity_8, entity_9);
}