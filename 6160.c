void fun()
{
  int entity_1 = 53;
  int entity_0 = 51;
  char* entity_3;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(53*sizeof(char));
  entity_3[53-1]='';
  memset(entity_5, 'i', entity_0-1);
  entity_5[entity_0-1]='';
  memcpy(entity_3, entity_5, entity_0*sizeof(char));
}