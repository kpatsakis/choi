void fun()
{
  int entity_2 = 28;
  entity_2 = 20;
  char entity_4[32] = "";
  entity_4 = NULL;
  char entity_9 = 'l';
  char* entity_6;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  memset(entity_4, 't', 32-1);
  entity_4[32-1]='';
  entity_6 = (char*)malloc(50*sizeof(char));
  entity_6[50-1]='';
  memset(entity_5, 'H', entity_2-1);
  entity_5[entity_2-1]='';
  memcpy(entity_6, entity_5, entity_2*sizeof(char));
}