void fun()
{
  int entity_1 = 67;
  char entity_5 = 'h';
  char entity_4[17] = "";
  entity_4 = NULL;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(19*sizeof(char));
  entity_9[19-1]='';
  memset(entity_6, 'Y', entity_1-1);
  entity_6[entity_1-1]='';
  memset(entity_4, 'S', 17-1);
  entity_4[17-1]='';
  memcpy(entity_9, entity_6, entity_1*sizeof(char));
}