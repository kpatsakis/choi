void fun()
{
  char* entity_3;
  char entity_6[45] = "";
  char* entity_4;
  entity_4 = (char*)malloc(37*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'x', 45-1);
  entity_6[45-1]='0';
  entity_3 = (char*)malloc(86*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_6);
}