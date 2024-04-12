void fun()
{
  int entity_4 = 96;
  char* entity_1;
  char* entity_5;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char entity_7 = 'c';
  memset(entity_6, 'P', entity_4-1);
  entity_6[entity_4-1]='';
  entity_5 = (char*)malloc(96*sizeof(char));
  entity_5[96-1]='';
  entity_1 = (char*)malloc(11*sizeof(char));
  entity_1[11-1]='';
  entity_4 = 10;
  strcpy(entity_1, entity_6);
}