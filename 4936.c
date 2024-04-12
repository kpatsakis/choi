void fun()
{
  int entity_4 = 48;
  char* entity_0;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(61*sizeof(char));
  entity_0[61-1]='';
  memset(entity_5, 't', entity_4-1);
  entity_5[entity_4-1]='';
  entity_4 = 44;
  memcpy(entity_0, entity_5, entity_4*sizeof(char));
}