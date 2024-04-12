void fun()
{
  int entity_9 = 49;
  char entity_8[38] = "";
  entity_8 = NULL;
  memset(entity_8, 'C', 38-1);
  entity_8[38-1]='';
  entity_8[entity_9] = 'l';
}