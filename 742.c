void fun()
{
  int entity_7 = 44;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_5;
  char* entity_8;
  entity_8 = (char*)malloc(32*sizeof(char));
  entity_8[32-1]='';
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[30-1]='';
  memset(entity_4, 'z', entity_7-1);
  entity_4[entity_7-1]='';
  entity_7 = 44;
  strcpy(entity_8, entity_4);
}