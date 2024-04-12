void fun()
{
  int entity_4 = 21;
  char* entity_1;
  char entity_3[96] = "";
  entity_3 = NULL;
  char entity_8[36] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memset(entity_8, 'v', 36-1);
  entity_8[36-1]='';
  memset(entity_3, 'Y', 96-1);
  entity_3[96-1]='';
  entity_4 = 80;
  memcpy(entity_1, entity_3, 96*sizeof(char));
}