void fun()
{
  int entity_2 = 88;
  char entity_5 = 'j';
  char entity_6 = 'e';
  char entity_0[19] = "";
  entity_0 = NULL;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_0, 'M', 19-1);
  entity_0[19-1]='';
  entity_4 = (char*)malloc(61*sizeof(char));
  entity_4[61-1]='';
  memset(entity_9, 'w', entity_2-1);
  entity_9[entity_2-1]='';
  strcpy(entity_4, entity_9);
}