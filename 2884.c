void fun()
{
  int entity_0 = 82;
  char* entity_3;
  char entity_1[45] = "";
  entity_1 = NULL;
  char entity_8[21] = "";
  entity_8 = NULL;
  memset(entity_1, 'z', 45-1);
  entity_1[45-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_8, 'T', 21-1);
  entity_8[21-1]='';
  strcpy(entity_3, entity_1);
}