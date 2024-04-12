void fun()
{
  char* entity_8;
  char* entity_1;
  char entity_3[45] = "";
  char entity_2[40] = "";
  entity_8 = (char*)malloc(48*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'x', 45-1);
  entity_3[45-1]='0';
  memset(entity_2, 'Z', 40-1);
  entity_2[40-1]='0';
  entity_1 = (char*)malloc(77*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_2);
}