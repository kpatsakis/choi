void fun()
{
  int entity_6 = 7;
  entity_6 = 67;
  char entity_4 = 'Z';
  char entity_8[24] = "";
  entity_8 = NULL;
  char* entity_2;
  char* entity_5;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  entity_2 = (char*)malloc(7*sizeof(char));
  entity_2[7-1]='';
  memset(entity_8, 'D', 24-1);
  entity_8[24-1]='';
  strcpy(entity_5, entity_8);
}