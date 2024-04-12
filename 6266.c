void fun()
{
  int entity_2 = 56;
  entity_2 = 19;
  char entity_3 = 'Y';
  char entity_6[97] = "";
  entity_6 = NULL;
  memset(entity_6, 'z', 97-1);
  entity_6[97-1]='';
  entity_6[entity_2] = 'P';
}