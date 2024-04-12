void fun()
{
  int entity_2 = 64;
  char entity_1 = 'd';
  char entity_0[45] = "";
  entity_0 = NULL;
  char entity_3 = 'Q';
  char* entity_4;
  entity_4 = (char*)malloc(65*sizeof(char));
  entity_4[65-1]='';
  memset(entity_0, 'E', 45-1);
  entity_0[45-1]='';
  strcpy(entity_4, entity_0);
}