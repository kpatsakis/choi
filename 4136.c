void fun()
{
  int entity_8 = 12;
  entity_8 = 6;
  char entity_2[25] = "";
  entity_2 = NULL;
  memset(entity_2, 'p', 25-1);
  entity_2[25-1]='';
  entity_2[entity_8] = 'k';
}