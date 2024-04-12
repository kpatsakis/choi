void fun()
{
  int entity_4 = 69;
  char* entity_5;
  char entity_2[47] = "";
  entity_2 = NULL;
  char entity_0[57] = "";
  entity_0 = NULL;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(44*sizeof(char));
  entity_5[44-1]='';
  memset(entity_2, 'z', 47-1);
  entity_2[47-1]='';
  memset(entity_9, 'h', entity_4-1);
  entity_9[entity_4-1]='';
  memset(entity_0, 'M', 57-1);
  entity_0[57-1]='';
  entity_4 = 95;
  strcpy(entity_5, entity_9);
}