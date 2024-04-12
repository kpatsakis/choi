void fun()
{
  int entity_1 = 1;
  char entity_2[70] = "";
  entity_2 = NULL;
  memset(entity_2, 'A', 70-1);
  entity_2[70-1]='';
  entity_2[entity_1] = 'J';
}