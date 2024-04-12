void fun()
{
  int entity_9 = 9;
  int entity_3 = 39;
  char entity_2[4] = "";
  entity_2 = NULL;
  char entity_6[73] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_2, 'Q', 4-1);
  entity_2[4-1]='';
  memset(entity_6, 'R', 73-1);
  entity_6[73-1]='';
  strcpy(entity_0, entity_2);
}