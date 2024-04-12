void fun()
{
  int entity_7 = 41;
  int entity_1 = 7;
  char* entity_0;
  char entity_6[41] = "";
  entity_6 = NULL;
  memset(entity_6, 'H', 41-1);
  entity_6[41-1]='';
  entity_0 = (char*)malloc(35*sizeof(char));
  entity_0[35-1]='';
  memcpy(entity_0, entity_6, 41*sizeof(char));
}