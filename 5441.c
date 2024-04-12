void fun()
{
  int entity_5 = 98;
  entity_5 = 17;
  char entity_6[55] = "";
  entity_6 = NULL;
  char* entity_9;
  char* entity_0;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_6, 'b', 55-1);
  entity_6[55-1]='';
  entity_9 = (char*)malloc(95*sizeof(char));
  entity_9[95-1]='';
  strcpy(entity_0, entity_6);
}