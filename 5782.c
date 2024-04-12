void fun()
{
  int entity_5 = 48;
  char entity_0[95] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_0, 'T', 95-1);
  entity_0[95-1]='';
  memcpy(entity_8, entity_0, 95*sizeof(char));
}