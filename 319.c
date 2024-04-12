void fun()
{
  int entity_9 = 85;
  char entity_7 = 'v';
  char entity_8[55] = "";
  entity_8 = NULL;
  memset(entity_8, 'Q', 55-1);
  entity_8[55-1]='';
  entity_8[entity_9] = 'V';
}