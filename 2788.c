void fun()
{
  int entity_8 = 29;
  char entity_0[37] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_0, 'n', 37-1);
  entity_0[37-1]='';
  entity_8 = 20;
  memcpy(entity_1, entity_0, 37*sizeof(char));
}