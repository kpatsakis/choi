void fun()
{
  int entity_0 = 75;
  char* entity_7;
  char* entity_3;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(58*sizeof(char));
  entity_3[58-1]='';
  memset(entity_8, 'j', entity_0-1);
  entity_8[entity_0-1]='';
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[96-1]='';
  entity_0 = 88;
  memcpy(entity_7, entity_8, entity_0*sizeof(char));
}