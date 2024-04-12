void fun()
{
  int entity_4 = 7;
  char entity_3[83] = "";
  entity_3 = NULL;
  memset(entity_3, 'H', 83-1);
  entity_3[83-1]='';
  entity_3[entity_4] = 'a';
}