void fun()
{
  int entity_9 = 63;
  entity_9 = 82;
  char* entity_6;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'l', entity_9-1);
  entity_1[entity_9-1]='';
  entity_6 = (char*)malloc(95*sizeof(char));
  entity_6[95-1]='';
  entity_1[3] = 'l';
}