void fun()
{
  int entity_7 = 78;
  char entity_4[35] = "";
  entity_4 = NULL;
  char entity_1[84] = "";
  entity_1 = NULL;
  char* entity_0;
  char* entity_6;
  memset(entity_4, 'M', 35-1);
  entity_4[35-1]='';
  entity_6 = (char*)malloc(20*sizeof(char));
  entity_6[20-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_1, 'z', 84-1);
  entity_1[84-1]='';
  strcpy(entity_0, entity_1);
}