void fun()
{
  int entity_1 = 55;
  char* entity_0;
  char* entity_9;
  char entity_4[44] = "";
  entity_4 = NULL;
  char entity_3 = 'e';
  char entity_2[42] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  entity_9 = (char*)malloc(69*sizeof(char));
  entity_9[69-1]='';
  memset(entity_2, 'k', 42-1);
  entity_2[42-1]='';
  memset(entity_4, 'W', 44-1);
  entity_4[44-1]='';
  strcpy(entity_0, entity_2);
}