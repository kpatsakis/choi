void fun()
{
  int entity_1 = 90;
  char entity_8[71] = "";
  entity_8 = NULL;
  memset(entity_8, 'l', 71-1);
  entity_8[71-1]='';
  entity_8[entity_1] = 'U';
}