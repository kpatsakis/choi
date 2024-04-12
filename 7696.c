void fun()
{
  int entity_1 = 73;
  entity_1 = 95;
  char entity_5 = 'E';
  char* entity_7;
  char entity_6[73] = "";
  entity_6 = NULL;
  char entity_9[40] = "";
  entity_9 = NULL;
  memset(entity_9, 'N', 40-1);
  entity_9[40-1]='';
  memset(entity_6, 's', 73-1);
  entity_6[73-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memcpy(entity_7, entity_9, 40*sizeof(char));
}