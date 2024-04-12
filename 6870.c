void fun()
{
  int entity_4 = 27;
  char entity_6[2] = "";
  entity_6 = NULL;
  memset(entity_6, 'E', 2-1);
  entity_6[2-1]='';
  entity_6[entity_4] = 'g';
}