void fun()
{
  int entity_8 = 38;
  entity_8 = 38;
  char* entity_5;
  char* entity_3;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(18*sizeof(char));
  entity_5[18-1]='';
  memset(entity_4, 'G', entity_8-1);
  entity_4[entity_8-1]='';
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[16-1]='';
  strcpy(entity_3, entity_4);
}