void fun()
{
  int entity_7 = 77;
  char entity_6[38] = "";
  entity_6 = NULL;
  char entity_9 = 'r';
  char* entity_0;
  memset(entity_6, 'T', 38-1);
  entity_6[38-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memcpy(entity_0, entity_6, 38*sizeof(char));
}