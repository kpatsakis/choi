void fun()
{
  int entity_4 = 78;
  entity_4 = 58;
  char entity_8[67] = "";
  entity_8 = NULL;
  memset(entity_8, 'S', 67-1);
  entity_8[67-1]='';
  entity_8[entity_4] = 'X';
}