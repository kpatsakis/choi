void fun()
{
  int entity_1 = 60;
  char entity_7[90] = "";
  entity_7 = NULL;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_3[55] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_7, 't', 90-1);
  entity_7[90-1]='';
  entity_9 = (char*)malloc(4*sizeof(char));
  entity_9[4-1]='';
  memset(entity_0, 'g', entity_1-1);
  entity_0[entity_1-1]='';
  memset(entity_3, 'q', 55-1);
  entity_3[55-1]='';
  memcpy(entity_9, entity_0, entity_1*sizeof(char));
}