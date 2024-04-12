void fun()
{
  int entity_5 = 67;
  char* entity_8;
  char* entity_2;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  memset(entity_4, 'P', entity_5-1);
  entity_4[entity_5-1]='';
  entity_8 = (char*)malloc(86*sizeof(char));
  entity_8[86-1]='';
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[48-1]='';
  entity_5 = 5;
  strcpy(entity_2, entity_4);
}