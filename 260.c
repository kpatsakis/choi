void fun()
{
  int entity_6 = 57;
  int entity_3 = 50;
  char entity_2[99] = "";
  entity_2 = NULL;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_0[5] = "";
  entity_0 = NULL;
  memset(entity_0, 'v', 5-1);
  entity_0[5-1]='';
  memset(entity_2, 'B', 99-1);
  entity_2[99-1]='';
  memset(entity_1, 'h', entity_6-1);
  entity_1[entity_6-1]='';
  entity_4 = (char*)malloc(85*sizeof(char));
  entity_4[85-1]='';
  strcpy(entity_4, entity_1);
}