void fun()
{
  int entity_5 = 43;
  int entity_0 = 3;
  entity_5 = 83;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[63] = 'C';
}