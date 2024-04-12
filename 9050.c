void fun()
{
  int entity_0 = 31;
  entity_0 = 31;
  char* entity_1;
  char* entity_8;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char entity_5[72] = "";
  entity_5 = NULL;
  char entity_4[95] = "";
  entity_4 = NULL;
  memset(entity_2, 'K', entity_0-1);
  entity_2[entity_0-1]='';
  entity_1 = (char*)malloc(3*sizeof(char));
  entity_1[3-1]='';
  memset(entity_4, 'c', 95-1);
  entity_4[95-1]='';
  entity_8 = (char*)malloc(53*sizeof(char));
  entity_8[53-1]='';
  memset(entity_5, 'i', 72-1);
  entity_5[72-1]='';
  strcpy(entity_1, entity_2);
}