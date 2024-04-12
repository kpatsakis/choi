void fun()
{
  int entity_3 = 79;
  int entity_6 = 6;
  entity_6 = 19;
  char entity_2[68] = "";
  entity_2 = NULL;
  char entity_5[52] = "";
  entity_5 = NULL;
  memset(entity_2, 's', 68-1);
  entity_2[68-1]='';
  memset(entity_5, 'q', 52-1);
  entity_5[52-1]='';
  entity_5[entity_6] = 'z';
}