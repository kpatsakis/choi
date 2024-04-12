void fun()
{
  int entity_5 = 27;
  int entity_9 = 81;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_7;
  char entity_0[55] = "";
  entity_0 = NULL;
  memset(entity_0, 'M', 55-1);
  entity_0[55-1]='';
  memset(entity_3, 'Y', entity_9-1);
  entity_3[entity_9-1]='';
  entity_7 = (char*)malloc(57*sizeof(char));
  entity_7[57-1]='';
  strcpy(entity_7, entity_3);
}