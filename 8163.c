void fun()
{
  int entity_1 = 76;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(38*sizeof(char));
  entity_4[38-1]='';
  memset(entity_8, 'E', entity_1-1);
  entity_8[entity_1-1]='';
  memcpy(entity_4, entity_8, entity_1*sizeof(char));
}