void fun()
{
  int entity_4 = 65;
  char entity_8[62] = "";
  entity_8 = NULL;
  memset(entity_8, 'a', 62-1);
  entity_8[62-1]='';
  entity_8[entity_4] = 'J';
}