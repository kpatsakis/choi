void fun()
{
  int entity_0 = 20;
  entity_0 = 36;
  char entity_9[63] = "";
  entity_9 = NULL;
  char entity_2[7] = "";
  entity_2 = NULL;
  memset(entity_9, 'o', 63-1);
  entity_9[63-1]='';
  memset(entity_2, 'j', 7-1);
  entity_2[7-1]='';
  entity_2[entity_0] = 'v';
}