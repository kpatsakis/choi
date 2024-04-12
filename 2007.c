void fun()
{
  int entity_7 = 76;
  entity_7 = 15;
  char entity_4[99] = "";
  entity_4 = NULL;
  char entity_0[10] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_0, 'Q', 10-1);
  entity_0[10-1]='';
  memset(entity_4, 'm', 99-1);
  entity_4[99-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memcpy(entity_6, entity_0, 10*sizeof(char));
}