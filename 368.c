void fun()
{
  int entity_3 = 92;
  char entity_6[6] = "";
  entity_6 = NULL;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  memset(entity_0, 'O', entity_3-1);
  entity_0[entity_3-1]='';
  memset(entity_6, 'O', 6-1);
  entity_6[6-1]='';
  entity_3 = 100;
  entity_0[73] = 'K';
}