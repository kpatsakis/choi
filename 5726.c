void fun()
{
  int entity_0 = 15;
  entity_0 = 15;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char entity_9[59] = "";
  entity_9 = NULL;
  char* entity_2;
  char entity_1[28] = "";
  entity_1 = NULL;
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[2-1]='';
  memset(entity_9, 'm', 59-1);
  entity_9[59-1]='';
  memset(entity_5, 'M', entity_0-1);
  entity_5[entity_0-1]='';
  memset(entity_1, 'Q', 28-1);
  entity_1[28-1]='';
  strcpy(entity_2, entity_5);
}