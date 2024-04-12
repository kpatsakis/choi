void fun()
{
  int entity_3 = 40;
  char entity_6[7] = "";
  entity_6 = NULL;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char entity_0 = 'v';
  char* entity_8;
  memset(entity_6, 'V', 7-1);
  entity_6[7-1]='';
  memset(entity_1, 'S', entity_3-1);
  entity_1[entity_3-1]='';
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[76-1]='';
  entity_3 = 80;
  memcpy(entity_8, entity_1, entity_3*sizeof(char));
}