void fun()
{
  int entity_0 = 26;
  char* entity_6;
  char entity_8[87] = "";
  entity_8 = NULL;
  char entity_5 = 'B';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_8, 'G', 87-1);
  entity_8[87-1]='';
  entity_0 = 72;
  memcpy(entity_6, entity_8, 87*sizeof(char));
}