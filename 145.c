void fun()
{
  int entity_7 = 12;
  char entity_1 = 'o';
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_3, 'K', entity_7-1);
  entity_3[entity_7-1]='';
  entity_7 = 77;
  entity_3[82] = 'K';
}