void fun()
{
  int entity_5 = 67;
  int entity_7 = 89;
  entity_5 = 7;
  char* entity_6;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char entity_2[87] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(20*sizeof(char));
  entity_6[20-1]='';
  memset(entity_4, 'v', entity_5-1);
  entity_4[entity_5-1]='';
  memset(entity_2, 'M', 87-1);
  entity_2[87-1]='';
  memcpy(entity_6, entity_4, entity_5*sizeof(char));
}