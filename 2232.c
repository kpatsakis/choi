void fun()
{
  int entity_1 = 80;
  int entity_3 = 67;
  entity_1 = 25;
  char entity_5[62] = "";
  entity_5 = NULL;
  char entity_6[96] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_5, 'f', 62-1);
  entity_5[62-1]='';
  memset(entity_6, 'T', 96-1);
  entity_6[96-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memcpy(entity_0, entity_5, 62*sizeof(char));
}