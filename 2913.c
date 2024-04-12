void fun()
{
  int entity_0 = 23;
  int entity_4 = 51;
  entity_0 = 74;
  char entity_8[17] = "";
  entity_8 = NULL;
  char entity_9[90] = "";
  entity_9 = NULL;
  char entity_5 = 'j';
  char* entity_1;
  memset(entity_8, 'e', 17-1);
  entity_8[17-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_9, 'n', 90-1);
  entity_9[90-1]='';
  strcpy(entity_1, entity_8);
}