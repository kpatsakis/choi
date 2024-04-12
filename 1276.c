void fun()
{
  int entity_2 = 6;
  entity_2 = 90;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'R', entity_2-1);
  entity_4[entity_2-1]='';
  entity_4[69] = 'T';
}