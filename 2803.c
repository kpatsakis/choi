void fun()
{
  int entity_3 = 86;
  entity_3 = 82;
  char entity_5 = 'B';
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'M', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[83] = 'K';
}