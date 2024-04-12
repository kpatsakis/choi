void fun()
{
  int entity_0 = 12;
  int entity_1 = 56;
  char entity_7[94] = "";
  entity_7 = NULL;
  memset(entity_7, 'h', 94-1);
  entity_7[94-1]='';
  entity_0 = 61;
  entity_7[entity_0] = 'p';
}