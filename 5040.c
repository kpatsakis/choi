void fun()
{
  int entity_0 = 61;
  char entity_8[90] = "";
  entity_8 = NULL;
  char entity_7[37] = "";
  entity_7 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_8, 'z', 90-1);
  entity_8[90-1]='';
  memset(entity_7, 'k', 37-1);
  entity_7[37-1]='';
  entity_0 = 82;
  memcpy(entity_9, entity_8, 90*sizeof(char));
}