void fun()
{
  int entity_8 = 75;
  char* entity_1;
  char entity_0[84] = "";
  entity_0 = NULL;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'J', entity_8-1);
  entity_7[entity_8-1]='';
  entity_1 = (char*)malloc(13*sizeof(char));
  entity_1[13-1]='';
  memset(entity_0, 'v', 84-1);
  entity_0[84-1]='';
  strcpy(entity_1, entity_7);
}