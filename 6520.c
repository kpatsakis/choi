void fun()
{
  int entity_0 = 21;
  entity_0 = 37;
  char* entity_9;
  char* entity_8;
  char entity_1[45] = "";
  entity_1 = NULL;
  char entity_3[35] = "";
  entity_3 = NULL;
  memset(entity_3, 'x', 35-1);
  entity_3[35-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_1, 'C', 45-1);
  entity_1[45-1]='';
  entity_9 = (char*)malloc(17*sizeof(char));
  entity_9[17-1]='';
  strcpy(entity_8, entity_3);
}