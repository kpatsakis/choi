void fun()
{
  int entity_2 = 77;
  entity_2 = 5;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 'd', entity_2-1);
  entity_3[entity_2-1]='';
  entity_3[57] = 'S';
}