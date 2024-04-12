void fun()
{
  int entity_8 = 1;
  int entity_0 = 5;
  entity_8 = 73;
  char entity_2[76] = "";
  entity_2 = NULL;
  char entity_5[1] = "";
  entity_5 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_5, 'm', 1-1);
  entity_5[1-1]='';
  memset(entity_2, 'h', 76-1);
  entity_2[76-1]='';
  strcpy(entity_7, entity_2);
}