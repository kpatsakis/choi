void fun()
{
  int entity_4 = 17;
  char entity_8[91] = "";
  entity_8 = NULL;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_5 = 'x';
  memset(entity_6, 'N', entity_4-1);
  entity_6[entity_4-1]='';
  memset(entity_8, 'Q', 91-1);
  entity_8[91-1]='';
  entity_1 = (char*)malloc(57*sizeof(char));
  entity_1[57-1]='';
  entity_4 = 44;
  strcpy(entity_1, entity_6);
}