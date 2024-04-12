void fun()
{
  int entity_7 = 41;
  entity_7 = 41;
  char* entity_6;
  char entity_5[61] = "";
  entity_5 = NULL;
  char entity_9[84] = "";
  entity_9 = NULL;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[98-1]='';
  memset(entity_5, 'r', 61-1);
  entity_5[61-1]='';
  memset(entity_9, 'b', 84-1);
  entity_9[84-1]='';
  memset(entity_0, 'C', entity_7-1);
  entity_0[entity_7-1]='';
  strcpy(entity_6, entity_0);
}