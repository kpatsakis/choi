void fun()
{
  int entity_1 = 58;
  char entity_4[87] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_8[95] = "";
  entity_8 = NULL;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'd', entity_1-1);
  entity_3[entity_1-1]='';
  entity_9 = (char*)malloc(100*sizeof(char));
  entity_9[100-1]='';
  memset(entity_4, 'N', 87-1);
  entity_4[87-1]='';
  memset(entity_8, 'D', 95-1);
  entity_8[95-1]='';
  entity_1 = 42;
  strcpy(entity_9, entity_3);
}