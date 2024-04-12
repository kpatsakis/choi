void fun()
{
  int entity_4 = 75;
  char entity_2[82] = "";
  entity_2 = NULL;
  memset(entity_2, 'B', 82-1);
  entity_2[82-1]='';
  entity_4 = 85;
  entity_2[entity_4] = 'K';
}