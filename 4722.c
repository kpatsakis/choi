void fun()
{
  int entity_5 = 11;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  memset(entity_0, 'O', entity_5-1);
  entity_0[entity_5-1]='';
  entity_0[52] = 'B';
}