void fun()
{
  int entity_5 = 84;
  int entity_9 = 48;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_7, 'v', entity_5-1);
  entity_7[entity_5-1]='';
  entity_0 = (char*)malloc(48*sizeof(char));
  entity_0[48-1]='';
  memcpy(entity_0, entity_7, entity_5*sizeof(char));
}