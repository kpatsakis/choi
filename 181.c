void fun()
{
  int entity_8 = 75;
  int entity_1 = 22;
  char entity_7[77] = "";
  entity_7 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(14*sizeof(char));
  entity_5[14-1]='';
  memset(entity_7, 'f', 77-1);
  entity_7[77-1]='';
  strcpy(entity_5, entity_7);
}