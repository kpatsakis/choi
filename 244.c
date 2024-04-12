void fun()
{
  int entity_5 = 51;
  char* entity_0;
  char entity_1[63] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_1, 'd', 63-1);
  entity_1[63-1]='';
  memcpy(entity_0, entity_1, 63*sizeof(char));
}