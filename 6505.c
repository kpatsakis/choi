void fun()
{
  int entity_3 = 56;
  char entity_1 = 'q';
  char entity_5 = 'q';
  char entity_8[27] = "";
  entity_8 = NULL;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  memset(entity_0, 't', entity_3-1);
  entity_0[entity_3-1]='';
  memset(entity_8, 'X', 27-1);
  entity_8[27-1]='';
  entity_0[21] = 'K';
}