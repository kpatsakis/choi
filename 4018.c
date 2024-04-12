void fun()
{
  int entity_7 = 23;
  char entity_1 = 's';
  char* entity_8;
  char entity_0[40] = "";
  entity_0 = NULL;
  char entity_3 = 'e';
  memset(entity_0, 'K', 40-1);
  entity_0[40-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memcpy(entity_8, entity_0, 40*sizeof(char));
}