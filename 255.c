void fun()
{
  int entity_4 = 27;
  entity_4 = 27;
  char* entity_9;
  char* entity_3;
  char entity_6[90] = "";
  entity_6 = NULL;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_1, 'z', entity_4-1);
  entity_1[entity_4-1]='';
  entity_9 = (char*)malloc(57*sizeof(char));
  entity_9[57-1]='';
  entity_3 = (char*)malloc(25*sizeof(char));
  entity_3[25-1]='';
  memset(entity_6, 'U', 90-1);
  entity_6[90-1]='';
  strcpy(entity_3, entity_1);
}