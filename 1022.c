void fun()
{
  int entity_8 = 94;
  char entity_2[31] = "";
  entity_2 = NULL;
  char* entity_5;
  char entity_1[44] = "";
  entity_1 = NULL;
  char* entity_4;
  entity_5 = (char*)malloc(61*sizeof(char));
  entity_5[61-1]='';
  memset(entity_2, 'X', 31-1);
  entity_2[31-1]='';
  memset(entity_1, 'R', 44-1);
  entity_1[44-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  strcpy(entity_4, entity_2);
}