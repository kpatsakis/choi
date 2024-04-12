void fun()
{
  int entity_7 = 39;
  int entity_6 = 50;
  int entity_1 = 70;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char entity_8[39] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(65*sizeof(char));
  entity_3[65-1]='';
  memset(entity_8, 'W', 39-1);
  entity_8[39-1]='';
  memset(entity_9, 'o', entity_6-1);
  entity_9[entity_6-1]='';
  entity_6 = 15;
  strcpy(entity_3, entity_9);
}