void fun()
{
  int entity_3 = 15;
  int entity_6 = 5;
  entity_3 = 81;
  char* entity_4;
  char entity_5[45] = "";
  char entity_1[53] = "";
  char entity_2[80] = "";
  memset(entity_1, 'U', 53-1);
  entity_1[53-1]='0';
  memset(entity_2, 'w', 80-1);
  entity_2[80-1]='0';
  memset(entity_5, 'l', 45-1);
  entity_5[45-1]='0';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_2);
}