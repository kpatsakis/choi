void fun()
{
  int entity_0 = 70;
  char* entity_6;
  char entity_1 = 'P';
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  memset(entity_9, 'i', entity_0-1);
  entity_9[entity_0-1]='';
  entity_6 = (char*)malloc(17*sizeof(char));
  entity_6[17-1]='';
  memcpy(entity_6, entity_9, entity_0*sizeof(char));
}