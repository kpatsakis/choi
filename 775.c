void fun()
{
  int entity_0 = 12;
  int entity_2 = 91;
  char entity_6[95] = "";
  entity_6 = NULL;
  memset(entity_6, 'a', 95-1);
  entity_6[95-1]='';
  entity_2 = 24;
  entity_6[entity_2] = 'U';
}