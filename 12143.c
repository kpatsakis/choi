void fun()
{
  int entity_7 = 27;
  char entity_5 = 'p';
  char* entity_6;
  char entity_0[45] = "";
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'c', 45-1);
  entity_0[45-1]='0';
  strcpy(entity_6, entity_0);
}