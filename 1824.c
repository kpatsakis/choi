void fun()
{
  int entity_1 = 26;
  char* entity_5;
  char entity_8 = 'M';
  char entity_4[20] = "";
  entity_4 = NULL;
  memset(entity_4, 'W', 20-1);
  entity_4[20-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  entity_1 = 12;
  strcpy(entity_5, entity_4);
}