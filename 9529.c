void fun()
{
  int entity_1 = 90;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_7 = 'v';
  char entity_8[55] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'e', 55-1);
  entity_8[55-1]='';
  entity_6 = (char*)malloc(83*sizeof(char));
  entity_6[83-1]='';
  memset(entity_0, 'u', entity_1-1);
  entity_0[entity_1-1]='';
  entity_1 = 1;
  memcpy(entity_6, entity_0, entity_1*sizeof(char));
}