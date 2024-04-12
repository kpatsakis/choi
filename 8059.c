void fun()
{
  int entity_2 = 99;
  char entity_1[11] = "";
  entity_1 = NULL;
  memset(entity_1, 'g', 11-1);
  entity_1[11-1]='';
  entity_2 = 76;
  entity_1[entity_2] = 'M';
}