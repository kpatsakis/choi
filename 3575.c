void fun()
{
  int entity_6 = 59;
  char* entity_5;
  char entity_3[61] = "";
  entity_3 = NULL;
  char entity_4 = 'f';
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[48-1]='';
  memset(entity_3, 'B', 61-1);
  entity_3[61-1]='';
  memset(entity_8, 'A', entity_6-1);
  entity_8[entity_6-1]='';
  strcpy(entity_5, entity_8);
}