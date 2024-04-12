void fun()
{
  int entity_4 = 58;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'q', entity_4-1);
  entity_2[entity_4-1]='';
  entity_2[16] = 'c';
}