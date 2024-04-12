void fun()
{
  int entity_0 = 72;
  char entity_8[96] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_8, 'f', 96-1);
  entity_8[96-1]='';
  memcpy(entity_3, entity_8, 96*sizeof(char));
}