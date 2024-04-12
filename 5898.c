void fun()
{
  int entity_4 = 12;
  entity_4 = 12;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_8;
  char* entity_5;
  memset(entity_6, 'u', entity_4-1);
  entity_6[entity_4-1]='';
  entity_5 = (char*)malloc(8*sizeof(char));
  entity_5[8-1]='';
  entity_8 = (char*)malloc(14*sizeof(char));
  entity_8[14-1]='';
  strcpy(entity_5, entity_6);
}