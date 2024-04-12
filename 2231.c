void fun()
{
  int entity_3 = 42;
  char entity_5[25] = "";
  entity_5 = NULL;
  char entity_0[45] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_5, 'B', 25-1);
  entity_5[25-1]='';
  memset(entity_0, 'A', 45-1);
  entity_0[45-1]='';
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[96-1]='';
  entity_3 = 55;
  entity_5[entity_3] = 's';
}