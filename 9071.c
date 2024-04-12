void fun()
{
  int entity_0 = 12;
  entity_0 = 16;
  char entity_3[37] = "";
  entity_3 = NULL;
  memset(entity_3, 'Z', 37-1);
  entity_3[37-1]='';
  entity_3[entity_0] = 'J';
}