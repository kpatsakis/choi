void fun()
{
  int entity_4 = 100;
  entity_4 = 100;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'Y', entity_4-1);
  entity_2[entity_4-1]='';
  entity_2[84] = 'r';
}