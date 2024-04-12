void fun()
{
  int entity_0 = 21;
  entity_0 = 32;
  char entity_1[90] = "";
  entity_1 = NULL;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_1, 'Y', 90-1);
  entity_1[90-1]='';
  memset(entity_2, 'D', entity_0-1);
  entity_2[entity_0-1]='';
  entity_2[67] = 'i';
}