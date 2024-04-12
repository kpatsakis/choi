void fun()
{
  int entity_8 = 76;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  memset(entity_2, 'D', entity_8-1);
  entity_2[entity_8-1]='';
  entity_2[97] = 'N';
}