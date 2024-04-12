void fun()
{
  int entity_7 = 20;
  char entity_3[97] = "";
  entity_3 = NULL;
  memset(entity_3, 'j', 97-1);
  entity_3[97-1]='';
  entity_3[entity_7] = 'Y';
}