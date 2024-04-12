void fun()
{
  int entity_1 = 45;
  char entity_2 = 'j';
  char* entity_5;
  char entity_6[5] = "";
  entity_6 = NULL;
  char entity_9[20] = "";
  entity_9 = NULL;
  memset(entity_6, 'W', 5-1);
  entity_6[5-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_9, 'L', 20-1);
  entity_9[20-1]='';
  entity_1 = 99;
  strcpy(entity_5, entity_9);
}