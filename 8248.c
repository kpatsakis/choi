void fun()
{
  int entity_0 = 31;
  entity_0 = 50;
  char* entity_3;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  memset(entity_8, 'n', entity_0-1);
  entity_8[entity_0-1]='';
  entity_3 = (char*)malloc(38*sizeof(char));
  entity_3[38-1]='';
  memcpy(entity_3, entity_8, entity_0*sizeof(char));
}