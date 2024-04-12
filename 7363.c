void fun()
{
  int entity_4 = 88;
  int entity_0 = 69;
  entity_4 = 40;
  char entity_3[45] = "";
  entity_3 = NULL;
  char* entity_6;
  char entity_8[47] = "";
  entity_8 = NULL;
  memset(entity_8, 'p', 47-1);
  entity_8[47-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_3, 'Y', 45-1);
  entity_3[45-1]='';
  strcpy(entity_6, entity_8);
}