void fun()
{
  int entity_3 = 57;
  char entity_4[96] = "";
  entity_4 = NULL;
  char* entity_5;
  char* entity_6;
  entity_5 = (char*)malloc(1*sizeof(char));
  entity_5[1-1]='';
  memset(entity_4, 'a', 96-1);
  entity_4[96-1]='';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  strcpy(entity_6, entity_4);
}