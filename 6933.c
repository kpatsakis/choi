void fun()
{
  int entity_4 = 47;
  entity_4 = 81;
  char entity_2[84] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', 84-1);
  entity_2[84-1]='';
  entity_2[entity_4] = 'T';
}