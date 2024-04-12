void fun()
{
  int entity_2 = 64;
  int entity_8 = 73;
  entity_8 = 73;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_4 = 't';
  char entity_7[6] = "";
  entity_7 = NULL;
  memset(entity_7, 'g', 6-1);
  entity_7[6-1]='';
  entity_5 = (char*)malloc(31*sizeof(char));
  entity_5[31-1]='';
  memset(entity_6, 'T', entity_8-1);
  entity_6[entity_8-1]='';
  strcpy(entity_5, entity_6);
}