void fun()
{
  int entity_0 = 17;
  int entity_5 = 93;
  entity_0 = 100;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_4;
  char entity_2 = 'i';
  memset(entity_9, 'p', entity_0-1);
  entity_9[entity_0-1]='';
  entity_4 = (char*)malloc(71*sizeof(char));
  entity_4[71-1]='';
  memcpy(entity_4, entity_9, entity_0*sizeof(char));
}