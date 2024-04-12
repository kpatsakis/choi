void fun()
{
  int entity_0 = 41;
  char* entity_9;
  char entity_6[44] = "";
  entity_6 = NULL;
  char entity_7 = 'g';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_6, 'Q', 44-1);
  entity_6[44-1]='';
  memcpy(entity_9, entity_6, 44*sizeof(char));
}