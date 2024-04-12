void fun()
{
  int entity_5 = 85;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_6;
  char* entity_4;
  entity_4 = (char*)malloc(6*sizeof(char));
  entity_4[6-1]='';
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[98-1]='';
  memset(entity_9, 'Y', entity_5-1);
  entity_9[entity_5-1]='';
  memcpy(entity_4, entity_9, entity_5*sizeof(char));
}