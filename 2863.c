void fun()
{
  int entity_6 = 40;
  char entity_3[61] = "";
  entity_3 = NULL;
  char* entity_7;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  memset(entity_1, 'q', entity_6-1);
  entity_1[entity_6-1]='';
  entity_7 = (char*)malloc(61*sizeof(char));
  entity_7[61-1]='';
  memset(entity_3, 'J', 61-1);
  entity_3[61-1]='';
  strcpy(entity_7, entity_1);
}