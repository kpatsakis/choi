void fun()
{
  int entity_0 = 89;
  entity_0 = 39;
  char entity_8[31] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'G', 31-1);
  entity_8[31-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memcpy(entity_6, entity_8, 31*sizeof(char));
}