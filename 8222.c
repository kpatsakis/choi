void fun()
{
  int entity_4 = 37;
  entity_4 = 71;
  char* entity_5;
  char entity_3[74] = "";
  entity_3 = NULL;
  char entity_9[44] = "";
  entity_9 = NULL;
  memset(entity_9, 'c', 44-1);
  entity_9[44-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_3, 's', 74-1);
  entity_3[74-1]='';
  strcpy(entity_5, entity_3);
}