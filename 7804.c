void fun()
{
  int entity_7 = 28;
  char* entity_4;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char entity_8 = 's';
  char* entity_1;
  entity_4 = (char*)malloc(48*sizeof(char));
  entity_4[48-1]='';
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[40-1]='';
  memset(entity_2, 'i', entity_7-1);
  entity_2[entity_7-1]='';
  strcpy(entity_4, entity_2);
}