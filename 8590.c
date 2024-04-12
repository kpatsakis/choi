void fun()
{
  int entity_7 = 38;
  char entity_1[96] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'G', 96-1);
  entity_1[96-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memcpy(entity_8, entity_1, 96*sizeof(char));
}