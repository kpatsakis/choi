void fun()
{
  int entity_4 = 6;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char entity_2 = 'Y';
  char entity_7 = 'Y';
  char* entity_0;
  entity_0 = (char*)malloc(96*sizeof(char));
  entity_0[96-1]='';
  memset(entity_5, 'j', entity_4-1);
  entity_5[entity_4-1]='';
  entity_4 = 86;
  memcpy(entity_0, entity_5, entity_4*sizeof(char));
}