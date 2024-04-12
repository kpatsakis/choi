void fun()
{
  int entity_2 = 72;
  int entity_3 = 66;
  char entity_7[29] = "";
  entity_7 = NULL;
  memset(entity_7, 'n', 29-1);
  entity_7[29-1]='';
  entity_7[entity_2] = 'U';
}