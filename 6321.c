void fun()
{
  int entity_9 = 21;
  entity_9 = 11;
  char entity_3[90] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_5[6] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[28-1]='';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_3, 'x', 90-1);
  entity_3[90-1]='';
  memset(entity_5, 'T', 6-1);
  entity_5[6-1]='';
  strcpy(entity_2, entity_5);
}