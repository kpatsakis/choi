void fun()
{
  int entity_1 = 42;
  entity_1 = 62;
  char* entity_7;
  char entity_4[96] = "";
  entity_4 = NULL;
  char entity_3 = 'n';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_4, 't', 96-1);
  entity_4[96-1]='';
  memcpy(entity_7, entity_4, 96*sizeof(char));
}