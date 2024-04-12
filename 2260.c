void fun()
{
  int entity_4 = 74;
  char entity_7[5] = "";
  entity_7 = NULL;
  memset(entity_7, 'H', 5-1);
  entity_7[5-1]='';
  entity_7[entity_4] = 'y';
}