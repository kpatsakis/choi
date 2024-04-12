void fun()
{
  int entity_1 = 60;
  char entity_4 = 'N';
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_5[28] = "";
  entity_5 = NULL;
  char* entity_3;
  char* entity_8;
  memset(entity_0, 'w', entity_1-1);
  entity_0[entity_1-1]='';
  entity_3 = (char*)malloc(69*sizeof(char));
  entity_3[69-1]='';
  entity_8 = (char*)malloc(8*sizeof(char));
  entity_8[8-1]='';
  memset(entity_5, 'm', 28-1);
  entity_5[28-1]='';
  strcpy(entity_3, entity_0);
}