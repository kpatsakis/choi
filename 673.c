void fun()
{
  int entity_4 = 78;
  char entity_8[65] = "";
  entity_8 = NULL;
  memset(entity_8, 'O', 65-1);
  entity_8[65-1]='';
  entity_4 = 24;
  entity_8[entity_4] = 'V';
}