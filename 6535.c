void fun()
{
  int entity_0 = 4;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(61*sizeof(char));
  entity_5[61-1]='';
  memset(entity_7, 'J', entity_0-1);
  entity_7[entity_0-1]='';
  memcpy(entity_5, entity_7, entity_0*sizeof(char));
}