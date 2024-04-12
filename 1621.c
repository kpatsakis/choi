void fun()
{
  int entity_1 = 68;
  char entity_6[29] = "";
  entity_6 = NULL;
  memset(entity_6, 'T', 29-1);
  entity_6[29-1]='';
  entity_1 = 22;
  entity_6[entity_1] = 'b';
}