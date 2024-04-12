void fun()
{
  int entity_5 = 6;
  int entity_7 = 72;
  char* entity_0;
  char entity_4[35] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_4, 'l', 35-1);
  entity_4[35-1]='';
  memcpy(entity_0, entity_4, 35*sizeof(char));
}