void fun()
{
  int entity_3 = 38;
  int entity_8 = 95;
  entity_8 = 95;
  char* entity_4;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_4 = (char*)malloc(18*sizeof(char));
  entity_4[18-1]='';
  entity_6 = (char*)malloc(71*sizeof(char));
  entity_6[71-1]='';
  memset(entity_7, 'a', entity_8-1);
  entity_7[entity_8-1]='';
  strcpy(entity_6, entity_7);
}