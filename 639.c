void fun()
{
  int entity_5 = 17;
  int entity_6 = 90;
  char entity_8[61] = "";
  entity_8 = NULL;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'A', entity_5-1);
  entity_2[entity_5-1]='';
  memset(entity_8, 'D', 61-1);
  entity_8[61-1]='';
  entity_2[79] = 'I';
}