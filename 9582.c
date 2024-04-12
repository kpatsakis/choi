void fun()
{
  int entity_7 = 81;
  int entity_1 = 49;
  entity_7 = 9;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char entity_4[40] = "";
  entity_4 = NULL;
  char entity_0 = 'g';
  char* entity_3;
  entity_3 = (char*)malloc(87*sizeof(char));
  entity_3[87-1]='';
  memset(entity_5, 'u', entity_7-1);
  entity_5[entity_7-1]='';
  memset(entity_4, 'Z', 40-1);
  entity_4[40-1]='';
  memcpy(entity_3, entity_5, entity_7*sizeof(char));
}