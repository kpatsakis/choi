void fun()
{
  int entity_4 = 27;
  entity_4 = 96;
  char entity_9[18] = "";
  entity_9 = NULL;
  char entity_7[42] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_9, 'c', 18-1);
  entity_9[18-1]='';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_7, 'p', 42-1);
  entity_7[42-1]='';
  strcpy(entity_0, entity_7);
}