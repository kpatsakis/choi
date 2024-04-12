void fun()
{
  int entity_2 = 73;
  char entity_8[65] = "";
  entity_8 = NULL;
  char entity_7 = 'S';
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  memset(entity_8, 'N', 65-1);
  entity_8[65-1]='';
  memset(entity_6, 'k', entity_2-1);
  entity_6[entity_2-1]='';
  entity_6[97] = 'N';
}