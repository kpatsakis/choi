void fun()
{
  int entity_0 = 84;
  char entity_3[81] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_3, 'a', 81-1);
  entity_3[81-1]='';
  memcpy(entity_8, entity_3, 81*sizeof(char));
}