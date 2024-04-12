void fun()
{
  int entity_8 = 56;
  int entity_3 = 67;
  char entity_7[80] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_9[72] = "";
  entity_9 = NULL;
  char entity_6[45] = "";
  entity_6 = NULL;
  memset(entity_7, 's', 80-1);
  entity_7[80-1]='';
  memset(entity_6, 'j', 45-1);
  entity_6[45-1]='';
  memset(entity_9, 'x', 72-1);
  entity_9[72-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  strcpy(entity_4, entity_7);
}