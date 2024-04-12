void fun()
{
  int entity_6 = 26;
  entity_6 = 48;
  char* entity_4;
  char entity_5[95] = "";
  entity_5 = NULL;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  memset(entity_0, 'T', entity_6-1);
  entity_0[entity_6-1]='';
  entity_4 = (char*)malloc(70*sizeof(char));
  entity_4[70-1]='';
  memset(entity_5, 'v', 95-1);
  entity_5[95-1]='';
  memcpy(entity_4, entity_0, entity_6*sizeof(char));
}