void fun()
{
  int entity_4 = 79;
  int entity_3 = 30;
  char entity_1[45] = "";
  char* entity_0;
  memset(entity_1, 'Z', 45-1);
  entity_1[45-1]='0';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  entity_4 = 21;
  strcpy(entity_0, entity_1);
}