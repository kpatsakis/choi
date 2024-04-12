void fun()
{
  int entity_5 = 61;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_4[25] = "";
  entity_4 = NULL;
  memset(entity_7, 'u', entity_5-1);
  entity_7[entity_5-1]='';
  memset(entity_4, 'w', 25-1);
  entity_4[25-1]='';
  entity_3 = (char*)malloc(81*sizeof(char));
  entity_3[81-1]='';
  entity_5 = 15;
  strcpy(entity_3, entity_7);
}