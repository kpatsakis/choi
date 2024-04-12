void fun()
{
  int entity_1 = 73;
  char entity_4[40] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'u', 40-1);
  entity_4[40-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  entity_1 = 29;
  memcpy(entity_0, entity_4, 40*sizeof(char));
}