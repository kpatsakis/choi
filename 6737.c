void fun()
{
  int entity_1 = 13;
  int entity_2 = 58;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char entity_9 = 'S';
  char* entity_4;
  char entity_5[87] = "";
  entity_5 = NULL;
  entity_4 = (char*)malloc(14*sizeof(char));
  entity_4[14-1]='';
  memset(entity_5, 'X', 87-1);
  entity_5[87-1]='';
  memset(entity_8, 'u', entity_2-1);
  entity_8[entity_2-1]='';
  entity_2 = 81;
  strcpy(entity_4, entity_8);
}