void fun()
{
  int entity_5 = 12;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_2[80] = "";
  entity_2 = NULL;
  char* entity_7;
  entity_9 = (char*)malloc(86*sizeof(char));
  entity_9[86-1]='';
  memset(entity_3, 'm', entity_5-1);
  entity_3[entity_5-1]='';
  memset(entity_2, 'G', 80-1);
  entity_2[80-1]='';
  entity_7 = (char*)malloc(33*sizeof(char));
  entity_7[33-1]='';
  entity_5 = 95;
  strcpy(entity_9, entity_3);
}