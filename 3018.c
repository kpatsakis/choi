void fun()
{
  int entity_2 = 71;
  int entity_9 = 26;
  char entity_8[84] = "";
  entity_8 = NULL;
  memset(entity_8, 'l', 84-1);
  entity_8[84-1]='';
  entity_8[entity_2] = 'k';
}