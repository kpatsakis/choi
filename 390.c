void fun()
{
  int entity_1 = 10;
  char* entity_7;
  char* entity_4;
  char entity_6[77] = "";
  entity_6 = NULL;
  memset(entity_6, 'A', 77-1);
  entity_6[77-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[53-1]='';
  entity_1 = 49;
  strcpy(entity_4, entity_6);
}