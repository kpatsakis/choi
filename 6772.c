void fun()
{
  int entity_7 = 62;
  int entity_8 = 51;
  int entity_0 = 95;
  char* entity_6;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char entity_1 = 'U';
  memset(entity_3, 'w', entity_8-1);
  entity_3[entity_8-1]='';
  entity_6 = (char*)malloc(11*sizeof(char));
  entity_6[11-1]='';
  entity_8 = 11;
  memcpy(entity_6, entity_3, entity_8*sizeof(char));
}