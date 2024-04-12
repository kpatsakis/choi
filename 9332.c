void fun()
{
  int entity_2 = 53;
  int entity_3 = 59;
  int entity_1 = 56;
  entity_1 = 4;
  char entity_5[79] = "";
  entity_5 = NULL;
  memset(entity_5, 'b', 79-1);
  entity_5[79-1]='';
  entity_5[entity_1] = 'r';
}