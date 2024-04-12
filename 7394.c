void fun()
{
  int entity_2 = 47;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_1, 'e', entity_2-1);
  entity_1[entity_2-1]='';
  entity_1[27] = 'G';
}