void fun()
{
  int entity_2 = 50;
  int entity_7 = 78;
  int entity_1 = 58;
  entity_7 = 17;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_4, 'G', entity_7-1);
  entity_4[entity_7-1]='';
  entity_4[55] = 'W';
}