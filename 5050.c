void fun()
{
  int entity_3 = 61;
  char entity_6[14] = "";
  entity_6 = NULL;
  memset(entity_6, 'O', 14-1);
  entity_6[14-1]='';
  entity_6[entity_3] = 'x';
}