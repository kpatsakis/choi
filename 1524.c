void fun()
{
  int entity_8 = 7;
  char* entity_0;
  char entity_7[51] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_7, 'v', 51-1);
  entity_7[51-1]='';
  memcpy(entity_0, entity_7, 51*sizeof(char));
}