void fun()
{
  int entity_0 = 55;
  entity_0 = 75;
  char entity_6[26] = "";
  entity_6 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_6, 'r', 26-1);
  entity_6[26-1]='';
  memcpy(entity_8, entity_6, 26*sizeof(char));
}