void fun()
{
  int entity_8 = 32;
  entity_8 = 85;
  char entity_1[74] = "";
  entity_1 = NULL;
  memset(entity_1, 'o', 74-1);
  entity_1[74-1]='';
  entity_1[entity_8] = 'm';
}