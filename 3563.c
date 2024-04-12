void fun()
{
  int entity_0 = 38;
  char* entity_3;
  char entity_8[7] = "";
  entity_8 = NULL;
  memset(entity_8, 'E', 7-1);
  entity_8[7-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memcpy(entity_3, entity_8, 7*sizeof(char));
}