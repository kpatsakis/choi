void fun()
{
  int entity_7 = 71;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_5[61] = "";
  entity_5 = NULL;
  memset(entity_5, 'Z', 61-1);
  entity_5[61-1]='';
  memset(entity_2, 'm', entity_7-1);
  entity_2[entity_7-1]='';
  entity_6 = (char*)malloc(18*sizeof(char));
  entity_6[18-1]='';
  memcpy(entity_6, entity_2, entity_7*sizeof(char));
}