void fun()
{
  int entity_3 = 88;
  entity_3 = 74;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'O', entity_3-1);
  entity_5[entity_3-1]='';
  entity_5[53] = 'K';
}