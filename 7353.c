void fun()
{
  int entity_6 = 1;
  char entity_8[90] = "";
  entity_8 = NULL;
  memset(entity_8, 'z', 90-1);
  entity_8[90-1]='';
  entity_8[entity_6] = 'w';
}