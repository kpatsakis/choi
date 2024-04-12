void fun()
{
  int entity_2 = 10;
  char entity_0[39] = "";
  entity_0 = NULL;
  char entity_7[95] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'M', 95-1);
  entity_7[95-1]='';
  memset(entity_0, 'q', 39-1);
  entity_0[39-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  strcpy(entity_1, entity_0);
}