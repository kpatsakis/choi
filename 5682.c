void fun()
{
  int entity_7 = 40;
  char entity_8[87] = "";
  entity_8 = NULL;
  char entity_6[48] = "";
  entity_6 = NULL;
  char* entity_9;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_8, 'm', 87-1);
  entity_8[87-1]='';
  entity_9 = (char*)malloc(54*sizeof(char));
  entity_9[54-1]='';
  memset(entity_6, 'T', 48-1);
  entity_6[48-1]='';
  memset(entity_3, 'u', entity_7-1);
  entity_3[entity_7-1]='';
  entity_3[86] = 'z';
}