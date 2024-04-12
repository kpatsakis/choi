void fun()
{
  int entity_9 = 27;
  char entity_8[66] = "";
  entity_8 = NULL;
  char entity_4[67] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'Q', 67-1);
  entity_4[67-1]='';
  memset(entity_8, 'K', 66-1);
  entity_8[66-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memcpy(entity_0, entity_8, 66*sizeof(char));
}