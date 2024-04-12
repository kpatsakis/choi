void fun()
{
  int entity_5 = 16;
  entity_5 = 16;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_7;
  char* entity_8;
  entity_8 = (char*)malloc(64*sizeof(char));
  entity_8[64-1]='';
  memset(entity_1, 'F', entity_5-1);
  entity_1[entity_5-1]='';
  entity_7 = (char*)malloc(7*sizeof(char));
  entity_7[7-1]='';
  strcpy(entity_8, entity_1);
}