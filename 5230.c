void fun()
{
  int entity_1 = 31;
  entity_1 = 22;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_9;
  memset(entity_6, 'M', entity_1-1);
  entity_6[entity_1-1]='';
  entity_9 = (char*)malloc(53*sizeof(char));
  entity_9[53-1]='';
  memcpy(entity_9, entity_6, entity_1*sizeof(char));
}