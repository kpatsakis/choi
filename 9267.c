void fun()
{
  int entity_4 = 55;
  char entity_6 = 'm';
  char entity_3[96] = "";
  entity_3 = NULL;
  memset(entity_3, 'a', 96-1);
  entity_3[96-1]='';
  entity_4 = 56;
  entity_3[entity_4] = 'K';
}