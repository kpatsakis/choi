void fun()
{
  int entity_4 = 98;
  char entity_2[52] = "";
  entity_2 = NULL;
  char* entity_5;
  char entity_1[45] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_2, 'T', 52-1);
  entity_2[52-1]='';
  memset(entity_1, 'K', 45-1);
  entity_1[45-1]='';
  entity_4 = 43;
  strcpy(entity_5, entity_2);
}