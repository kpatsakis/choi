void fun()
{
  int entity_1 = 26;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_2, 'a', entity_1-1);
  entity_2[entity_1-1]='';
  entity_2[57] = 'S';
}