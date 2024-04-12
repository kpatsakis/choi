void fun()
{
  int entity_5 = 13;
  entity_5 = 33;
  char entity_8[62] = "";
  entity_8 = NULL;
  memset(entity_8, 'i', 62-1);
  entity_8[62-1]='';
  entity_8[entity_5] = 'g';
}