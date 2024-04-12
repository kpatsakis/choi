void fun()
{
  int entity_8 = 54;
  int entity_3 = 48;
  int entity_7 = 71;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(93*sizeof(char));
  entity_6[93-1]='';
  memset(entity_4, 'o', entity_7-1);
  entity_4[entity_7-1]='';
  memcpy(entity_6, entity_4, entity_7*sizeof(char));
}