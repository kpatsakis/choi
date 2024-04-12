void fun()
{
  int entity_1 = 35;
  char* entity_7;
  char entity_0[46] = "";
  entity_0 = NULL;
  char entity_3[54] = "";
  entity_3 = NULL;
  char entity_9[45] = "";
  entity_9 = NULL;
  memset(entity_3, 'A', 54-1);
  entity_3[54-1]='';
  memset(entity_0, 'g', 46-1);
  entity_0[46-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_9, 'n', 45-1);
  entity_9[45-1]='';
  entity_1 = 7;
  memcpy(entity_7, entity_0, 46*sizeof(char));
}