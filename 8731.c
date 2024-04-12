void fun()
{
  int entity_7 = 100;
  char entity_9 = 'G';
  char entity_0 = 'c';
  char entity_6[96] = "";
  entity_6 = NULL;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_6, 'a', 96-1);
  entity_6[96-1]='';
  memset(entity_5, 'm', entity_7-1);
  entity_5[entity_7-1]='';
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[19-1]='';
  strcpy(entity_2, entity_5);
}