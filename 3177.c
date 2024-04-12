void fun()
{
  int entity_7 = 9;
  char* entity_4;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char entity_6[12] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  memset(entity_6, 'X', 12-1);
  entity_6[12-1]='';
  memset(entity_5, 'p', entity_7-1);
  entity_5[entity_7-1]='';
  entity_7 = 100;
  memcpy(entity_4, entity_5, entity_7*sizeof(char));
}