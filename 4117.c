void fun()
{
  int entity_0 = 82;
  int entity_6 = 7;
  char entity_7[89] = "";
  entity_7 = NULL;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  memset(entity_8, 'a', entity_6-1);
  entity_8[entity_6-1]='';
  memset(entity_7, 'o', 89-1);
  entity_7[89-1]='';
  entity_6 = 59;
  entity_8[90] = 'a';
}