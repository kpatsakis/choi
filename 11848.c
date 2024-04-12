void fun()
{
  char* entity_9;
  char* entity_3;
  char entity_8[45] = "";
  char* entity_1;
  memset(entity_8, 'B', 45-1);
  entity_8[45-1]='0';
  entity_9 = (char*)malloc(37*sizeof(char));
  entity_9[0]='0';
  entity_1 = (char*)malloc(75*sizeof(char));
  entity_1[0]='0';
  entity_3 = (char*)malloc(33*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_9, entity_8);
}