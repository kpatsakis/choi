void fun()
{
  int entity_8 = 31;
  int entity_1 = 11;
  char entity_4[29] = "";
  char* entity_3;
  char entity_6[45] = "";
  memset(entity_4, 'z', 29-1);
  entity_4[29-1]='0';
  memset(entity_6, 't', 45-1);
  entity_6[45-1]='0';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[0]='0';
  entity_8 = 97;
  strcpy(entity_3, entity_4);
}