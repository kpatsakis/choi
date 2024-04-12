void fun()
{
  int entity_5 = 49;
  char entity_7[96] = "";
  entity_7 = NULL;
  char* entity_1;
  char entity_0 = 'B';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_7, 'j', 96-1);
  entity_7[96-1]='';
  memcpy(entity_1, entity_7, 96*sizeof(char));
}