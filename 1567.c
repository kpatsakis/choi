void fun()
{
  int entity_4 = 30;
  char* entity_0;
  char entity_6[33] = "";
  entity_6 = NULL;
  char entity_2 = 'S';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_6, 'd', 33-1);
  entity_6[33-1]='';
  entity_4 = 22;
  memcpy(entity_0, entity_6, 33*sizeof(char));
}