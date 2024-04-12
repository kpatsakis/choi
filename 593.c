void fun()
{
  int entity_5 = 29;
  char entity_3[49] = "";
  entity_3 = NULL;
  memset(entity_3, 'e', 49-1);
  entity_3[49-1]='';
  entity_3[entity_5] = 'J';
}