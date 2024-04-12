void fun()
{
  int entity_3 = 4;
  char entity_8[54] = "";
  entity_8 = NULL;
  memset(entity_8, 'j', 54-1);
  entity_8[54-1]='';
  entity_8[97] = 'P';
}