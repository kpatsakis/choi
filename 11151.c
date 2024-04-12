void fun()
{
  int entity_7 = 86;
  char entity_4[97] = "";
  char* entity_2;
  char entity_3[64] = "";
  memset(entity_3, 'A', 64-1);
  entity_3[64-1]='0';
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'P', 97-1);
  entity_4[97-1]='0';
  strcpy(entity_2, entity_4);
}