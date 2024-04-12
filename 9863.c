void fun()
{
  int entity_5 = 75;
  entity_5 = 41;
  char entity_3 = 'T';
  char entity_1 = 'p';
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[21-1]='';
  memset(entity_9, 'S', entity_5-1);
  entity_9[entity_5-1]='';
  memcpy(entity_6, entity_9, entity_5*sizeof(char));
}