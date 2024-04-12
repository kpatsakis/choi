void fun()
{
  int entity_5 = 67;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'x', entity_5-1);
  entity_6[entity_5-1]='';
  entity_7 = (char*)malloc(65*sizeof(char));
  entity_7[65-1]='';
  entity_5 = 64;
  memcpy(entity_7, entity_6, entity_5*sizeof(char));
}