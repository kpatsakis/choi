void fun()
{
  int entity_1 = 7;
  entity_1 = 59;
  char entity_3[75] = "";
  entity_3 = NULL;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  memset(entity_3, 'X', 75-1);
  entity_3[75-1]='';
  memset(entity_8, 'i', entity_1-1);
  entity_8[entity_1-1]='';
  entity_8[89] = 'r';
}