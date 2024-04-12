void fun()
{
  int entity_2 = 94;
  int entity_0 = 83;
  entity_0 = 39;
  char entity_9[61] = "";
  entity_9 = NULL;
  char* entity_8;
  char entity_5[59] = "";
  entity_5 = NULL;
  char* entity_1;
  entity_8 = (char*)malloc(98*sizeof(char));
  entity_8[98-1]='';
  memset(entity_5, 'M', 59-1);
  entity_5[59-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_9, 'y', 61-1);
  entity_9[61-1]='';
  strcpy(entity_1, entity_9);
}