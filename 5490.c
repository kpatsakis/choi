void fun()
{
  int entity_6 = 67;
  int entity_5 = 18;
  entity_6 = 5;
  char entity_7[54] = "";
  entity_7 = NULL;
  char entity_3[44] = "";
  entity_3 = NULL;
  char* entity_1;
  memset(entity_7, 'V', 54-1);
  entity_7[54-1]='';
  memset(entity_3, 'M', 44-1);
  entity_3[44-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  strcpy(entity_1, entity_3);
}