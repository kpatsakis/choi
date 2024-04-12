void fun()
{
  int entity_1 = 6;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char entity_4 = 'o';
  char entity_3 = 'O';
  memset(entity_6, 'e', entity_1-1);
  entity_6[entity_1-1]='';
  entity_6[77] = 'd';
}