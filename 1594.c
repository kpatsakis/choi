void fun()
{
  int entity_4 = 74;
  entity_4 = 87;
  char entity_6[16] = "";
  entity_6 = NULL;
  memset(entity_6, 'y', 16-1);
  entity_6[16-1]='';
  entity_6[entity_4] = 'B';
}