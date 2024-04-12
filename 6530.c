void fun()
{
  int entity_5 = 7;
  char entity_8[20] = "";
  entity_8 = NULL;
  memset(entity_8, 'W', 20-1);
  entity_8[20-1]='';
  entity_8[entity_5] = 'J';
}