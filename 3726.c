void fun()
{
  int entity_1 = 87;
  char* entity_5;
  char entity_3[11] = "";
  entity_3 = NULL;
  char entity_9[44] = "";
  entity_9 = NULL;
  memset(entity_9, 'k', 44-1);
  entity_9[44-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_3, 'P', 11-1);
  entity_3[11-1]='';
  entity_1 = 12;
  memcpy(entity_5, entity_9, 44*sizeof(char));
}