void fun()
{
  int entity_2 = 67;
  entity_2 = 4;
  char entity_6[7] = "";
  entity_6 = NULL;
  memset(entity_6, 'S', 7-1);
  entity_6[7-1]='';
  entity_6[entity_2] = 'U';
}