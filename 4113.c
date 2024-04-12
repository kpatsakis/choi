void fun()
{
  int entity_1 = 1;
  int entity_8 = 13;
  int entity_3 = 74;
  char entity_4[25] = "";
  entity_4 = NULL;
  char entity_7 = 'a';
  memset(entity_4, 'd', 25-1);
  entity_4[25-1]='';
  entity_1 = 25;
  entity_4[entity_1] = 'B';
}