void fun()
{
  int entity_2 = 73;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char entity_5[19] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'G', 19-1);
  entity_5[19-1]='';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  memset(entity_0, 'E', entity_2-1);
  entity_0[entity_2-1]='';
  strcpy(entity_9, entity_0);
}