void fun()
{
  int entity_3 = 62;
  char* entity_4;
  char entity_5[65] = "";
  entity_5 = NULL;
  memset(entity_5, 'l', 65-1);
  entity_5[65-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memcpy(entity_4, entity_5, 65*sizeof(char));
}