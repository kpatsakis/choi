void fun()
{
  int entity_1 = 6;
  char entity_2[9] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  memset(entity_6, 'V', entity_1-1);
  entity_6[entity_1-1]='';
  memset(entity_2, 'R', 9-1);
  entity_2[9-1]='';
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[33-1]='';
  strcpy(entity_4, entity_6);
}