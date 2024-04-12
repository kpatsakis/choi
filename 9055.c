void fun()
{
  int entity_2 = 80;
  int entity_3 = 81;
  char entity_8[36] = "";
  entity_8 = NULL;
  memset(entity_8, 'u', 36-1);
  entity_8[36-1]='';
  entity_8[entity_3] = 'B';
}