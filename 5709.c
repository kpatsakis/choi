void fun()
{
  int entity_1 = 70;
  char entity_7 = 'G';
  char entity_2[77] = "";
  entity_2 = NULL;
  memset(entity_2, 'g', 77-1);
  entity_2[77-1]='';
  entity_1 = 7;
  entity_2[entity_1] = 'H';
}