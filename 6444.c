void fun()
{
  int entity_2 = 61;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char* entity_6;
  char entity_0[73] = "";
  entity_0 = NULL;
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[54-1]='';
  memset(entity_0, 'k', 73-1);
  entity_0[73-1]='';
  memset(entity_1, 'k', entity_2-1);
  entity_1[entity_2-1]='';
  strcpy(entity_6, entity_1);
}