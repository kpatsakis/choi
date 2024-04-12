void fun()
{
  int entity_9 = 58;
  char* entity_0;
  char entity_1[5] = "";
  entity_1 = NULL;
  char entity_3 = 'U';
  memset(entity_1, 'R', 5-1);
  entity_1[5-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  strcpy(entity_0, entity_1);
}