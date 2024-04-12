void fun()
{
  int entity_6 = 20;
  int entity_3 = 76;
  char entity_9[48] = "";
  entity_9 = NULL;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_2, 'h', entity_6-1);
  entity_2[entity_6-1]='';
  memset(entity_9, 'P', 48-1);
  entity_9[48-1]='';
  entity_5 = (char*)malloc(9*sizeof(char));
  entity_5[9-1]='';
  entity_6 = 75;
  memcpy(entity_5, entity_2, entity_6*sizeof(char));
}