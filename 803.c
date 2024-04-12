void fun()
{
  int entity_1 = 15;
  int entity_5 = 99;
  char entity_6[28] = "";
  entity_6 = NULL;
  char* entity_4;
  char* entity_2;
  memset(entity_6, 'T', 28-1);
  entity_6[28-1]='';
  entity_4 = (char*)malloc(44*sizeof(char));
  entity_4[44-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  strcpy(entity_2, entity_6);
}