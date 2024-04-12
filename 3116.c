void fun()
{
  int entity_6 = 75;
  char entity_4 = 'U';
  char* entity_5;
  char entity_9[99] = "";
  entity_9 = NULL;
  char* entity_2;
  char entity_3[75] = "";
  entity_3 = NULL;
  memset(entity_9, 'w', 99-1);
  entity_9[99-1]='';
  entity_5 = (char*)malloc(86*sizeof(char));
  entity_5[86-1]='';
  memset(entity_3, 'w', 75-1);
  entity_3[75-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  strcpy(entity_2, entity_3);
}