void fun()
{
  int entity_2 = 82;
  int entity_3 = 63;
  int entity_9 = 47;
  char* entity_4;
  char entity_6[100] = "";
  entity_6 = NULL;
  char entity_0[96] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  memset(entity_6, 'q', 100-1);
  entity_6[100-1]='';
  memset(entity_0, 'e', 96-1);
  entity_0[96-1]='';
  entity_9 = 11;
  memcpy(entity_4, entity_6, 100*sizeof(char));
}