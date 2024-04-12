void fun()
{
  int entity_7 = 91;
  char* entity_0;
  char entity_3[76] = "";
  entity_3 = NULL;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_3, 'E', 76-1);
  entity_3[76-1]='';
  entity_7 = 38;
  memcpy(entity_0, entity_3, 76*sizeof(char));
}