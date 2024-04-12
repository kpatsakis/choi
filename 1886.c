void fun()
{
  int entity_0 = 66;
  char* entity_9;
  char* entity_5;
  char entity_6[4] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(57*sizeof(char));
  entity_5[57-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_6, 'j', 4-1);
  entity_6[4-1]='';
  entity_0 = 79;
  memcpy(entity_9, entity_6, 4*sizeof(char));
}