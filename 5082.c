void fun()
{
  int entity_2 = 67;
  int entity_5 = 4;
  char* entity_6;
  char entity_3[56] = "";
  entity_3 = NULL;
  char entity_8[71] = "";
  entity_8 = NULL;
  char* entity_9;
  memset(entity_3, 'x', 56-1);
  entity_3[56-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  entity_9 = (char*)malloc(6*sizeof(char));
  entity_9[6-1]='';
  memset(entity_8, 's', 71-1);
  entity_8[71-1]='';
  strcpy(entity_6, entity_3);
}