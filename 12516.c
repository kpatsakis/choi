void fun()
{
  int entity_8 = 32;
  int entity_6 = 32;
  char* entity_3;
  char entity_1 = 's';
  char entity_4[45] = "";
  char entity_2[90] = "";
  memset(entity_2, 'i', 90-1);
  entity_2[90-1]='0';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'D', 45-1);
  entity_4[45-1]='0';
  strcpy(entity_3, entity_2);
}