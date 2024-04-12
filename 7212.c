void fun()
{
  int entity_5 = 9;
  entity_5 = 53;
  char entity_8 = 'D';
  char entity_6[77] = "";
  entity_6 = NULL;
  memset(entity_6, 'A', 77-1);
  entity_6[77-1]='';
  entity_6[entity_5] = 'G';
}