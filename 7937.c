void fun()
{
  int entity_4 = 50;
  int entity_2 = 27;
  char entity_9 = 'J';
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 'Y', entity_2-1);
  entity_3[entity_2-1]='';
  entity_3[80] = 'X';
}