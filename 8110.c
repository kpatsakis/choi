void fun()
{
  int entity_6 = 5;
  char* entity_3;
  char entity_9[61] = "";
  entity_9 = NULL;
  char* entity_8;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_9, 'P', 61-1);
  entity_9[61-1]='';
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[44-1]='';
  entity_6 = 96;
  strcpy(entity_3, entity_9);
}