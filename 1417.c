void fun()
{
  int entity_0 = 46;
  char entity_8 = 'b';
  char entity_4[1] = "";
  entity_4 = NULL;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  memset(entity_6, 'p', entity_0-1);
  entity_6[entity_0-1]='';
  memset(entity_4, 'P', 1-1);
  entity_4[1-1]='';
  entity_0 = 9;
  entity_6[50] = 'g';
}