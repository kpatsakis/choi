void fun()
{
  int entity_7 = 85;
  int entity_9 = 71;
  char* entity_6;
  char entity_1 = 'f';
  char entity_2[96] = "";
  entity_2 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_2, 'J', 96-1);
  entity_2[96-1]='';
  entity_6 = (char*)malloc(66*sizeof(char));
  entity_6[66-1]='';
  memcpy(entity_0, entity_2, 96*sizeof(char));
}