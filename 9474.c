void fun()
{
  int entity_2 = 94;
  int entity_7 = 64;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char entity_1 = 'Z';
  memset(entity_8, 'W', entity_2-1);
  entity_8[entity_2-1]='';
  entity_2 = 84;
  entity_8[15] = 'W';
}