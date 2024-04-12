void fun()
{
  int entity_8 = 34;
  int entity_6 = 62;
  char entity_5[91] = "";
  entity_5 = NULL;
  memset(entity_5, 'O', 91-1);
  entity_5[91-1]='';
  entity_5[entity_8] = 'U';
}