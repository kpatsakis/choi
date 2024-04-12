void fun()
{
  int entity_0 = 94;
  char entity_9[77] = "";
  entity_9 = NULL;
  char entity_2[45] = "";
  entity_2 = NULL;
  char* entity_8;
  char entity_7[2] = "";
  entity_7 = NULL;
  memset(entity_2, 'Q', 45-1);
  entity_2[45-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_7, 'q', 2-1);
  entity_7[2-1]='';
  memset(entity_9, 'q', 77-1);
  entity_9[77-1]='';
  strcpy(entity_8, entity_7);
}