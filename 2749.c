void fun()
{
  int entity_6 = 82;
  char entity_3[11] = "";
  entity_3 = NULL;
  char entity_9[86] = "";
  entity_9 = NULL;
  memset(entity_9, 'O', 86-1);
  entity_9[86-1]='';
  memset(entity_3, 'G', 11-1);
  entity_3[11-1]='';
  entity_3[entity_6] = 'z';
}