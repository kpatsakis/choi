void fun()
{
  int entity_7 = 26;
  entity_7 = 2;
  char* entity_0;
  char entity_1[45] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_1, 'E', 45-1);
  entity_1[45-1]='';
  strcpy(entity_0, entity_1);
}