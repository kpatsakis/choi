void fun()
{
  int entity_0 = 53;
  char entity_2[51] = "";
  entity_2 = NULL;
  char entity_4[97] = "";
  entity_4 = NULL;
  memset(entity_2, 'm', 51-1);
  entity_2[51-1]='';
  memset(entity_4, 'k', 97-1);
  entity_4[97-1]='';
  entity_0 = 96;
  entity_2[entity_0] = 'U';
}