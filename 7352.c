void fun()
{
  int entity_6 = 72;
  entity_6 = 46;
  char entity_2[55] = "";
  entity_2 = NULL;
  char entity_5[59] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_2, 'p', 55-1);
  entity_2[55-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_5, 'D', 59-1);
  entity_5[59-1]='';
  strcpy(entity_9, entity_5);
}