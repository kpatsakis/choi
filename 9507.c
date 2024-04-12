void fun()
{
  int entity_9 = 13;
  int entity_7 = 10;
  char entity_5[84] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_8[8] = "";
  entity_8 = NULL;
  char entity_4 = 'a';
  memset(entity_8, 'V', 8-1);
  entity_8[8-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_5, 'h', 84-1);
  entity_5[84-1]='';
  strcpy(entity_0, entity_5);
}