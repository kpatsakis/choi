void fun()
{
  int entity_4 = 43;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'z', entity_4-1);
  entity_7[entity_4-1]='';
  entity_7[97] = 'y';
}