void fun()
{
  int entity_4 = 45;
  char entity_9 = 'D';
  char entity_2[90] = "";
  entity_2 = NULL;
  memset(entity_2, 'N', 90-1);
  entity_2[90-1]='';
  entity_2[entity_4] = 'y';
}