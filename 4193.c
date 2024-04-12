void fun()
{
  int entity_2 = 48;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  memset(entity_0, 'U', entity_2-1);
  entity_0[entity_2-1]='';
  entity_0[97] = 'X';
}