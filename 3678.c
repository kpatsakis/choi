void fun()
{
  int entity_2 = 89;
  int entity_4 = 7;
  char entity_9[61] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  memset(entity_3, 'h', entity_4-1);
  entity_3[entity_4-1]='';
  memset(entity_9, 'g', 61-1);
  entity_9[61-1]='';
  entity_4 = 84;
  strcpy(entity_5, entity_3);
}