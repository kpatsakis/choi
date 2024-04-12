void fun()
{
  char* entity_6;
  char* entity_8;
  char entity_0[45] = "";
  memset(entity_0, 'K', 45-1);
  entity_0[45-1]='0';
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[0]='0';
  entity_8 = (char*)malloc(6*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_6, entity_0);
}