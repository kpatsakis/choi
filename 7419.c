void fun()
{
  int entity_9 = 22;
  entity_9 = 39;
  char entity_7[30] = "";
  entity_7 = NULL;
  char* entity_1;
  char entity_5[58] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_7, 'a', 30-1);
  entity_7[30-1]='';
  memset(entity_5, 'h', 58-1);
  entity_5[58-1]='';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  entity_1 = (char*)malloc(12*sizeof(char));
  entity_1[12-1]='';
  strcpy(entity_2, entity_5);
}