void fun()
{
  int entity_2 = 95;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char entity_6 = 'j';
  char entity_4 = 'Q';
  memset(entity_9, 'X', entity_2-1);
  entity_9[entity_2-1]='';
  entity_9[82] = 'S';
}