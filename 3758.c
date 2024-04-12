void fun()
{
  int entity_7 = 85;
  char* entity_3;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(32*sizeof(char));
  entity_3[32-1]='';
  memset(entity_8, 'W', entity_7-1);
  entity_8[entity_7-1]='';
  entity_7 = 17;
  memcpy(entity_3, entity_8, entity_7*sizeof(char));
}