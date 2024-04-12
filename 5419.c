void fun()
{
  int entity_4 = 50;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'v', entity_4-1);
  entity_2[entity_4-1]='';
  entity_2[94] = 'C';
}