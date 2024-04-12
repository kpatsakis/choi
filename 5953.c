void fun()
{
  int entity_5 = 23;
  char entity_3[51] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_3, 'T', 51-1);
  entity_3[51-1]='';
  memcpy(entity_0, entity_3, 51*sizeof(char));
}