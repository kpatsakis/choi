void fun()
{
  int entity_3 = 12;
  int entity_5 = 97;
  char* entity_8;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(57*sizeof(char));
  entity_8[57-1]='';
  memset(entity_9, 'J', entity_3-1);
  entity_9[entity_3-1]='';
  memcpy(entity_8, entity_9, entity_3*sizeof(char));
}