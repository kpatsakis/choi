void fun()
{
  int entity_8 = 22;
  char* entity_6;
  char entity_1[90] = "";
  entity_1 = NULL;
  memset(entity_1, 'K', 90-1);
  entity_1[90-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memcpy(entity_6, entity_1, 90*sizeof(char));
}