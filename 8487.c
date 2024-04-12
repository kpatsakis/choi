void fun()
{
  int entity_5 = 3;
  char* entity_7;
  char entity_0[23] = "";
  entity_0 = NULL;
  memset(entity_0, 'M', 23-1);
  entity_0[23-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  entity_5 = 27;
  memcpy(entity_7, entity_0, 23*sizeof(char));
}