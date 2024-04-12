void fun()
{
  int entity_4 = 99;
  char entity_3[97] = "";
  char entity_5 = 'n';
  char* entity_0;
  memset(entity_3, 'A', 97-1);
  entity_3[97-1]='0';
  entity_0 = (char*)malloc(37*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_3);
}