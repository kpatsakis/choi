void fun()
{
  int entity_6 = 92;
  char entity_0[25] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_9[93] = "";
  entity_9 = NULL;
  char entity_2[93] = "";
  entity_2 = NULL;
  memset(entity_9, 'x', 93-1);
  entity_9[93-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_0, 'k', 25-1);
  entity_0[25-1]='';
  memset(entity_2, 'w', 93-1);
  entity_2[93-1]='';
  strcpy(entity_1, entity_2);
}