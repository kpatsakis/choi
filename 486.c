void fun()
{
  int entity_8 = 76;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_3[45] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[5-1]='';
  memset(entity_4, 'f', entity_8-1);
  entity_4[entity_8-1]='';
  memset(entity_3, 'G', 45-1);
  entity_3[45-1]='';
  strcpy(entity_5, entity_4);
}