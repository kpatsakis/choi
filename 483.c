void fun()
{
  int entity_4 = 18;
  char entity_1 = 'j';
  char* entity_8;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_3, 'X', entity_4-1);
  entity_3[entity_4-1]='';
  entity_6 = (char*)malloc(44*sizeof(char));
  entity_6[44-1]='';
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[31-1]='';
  strcpy(entity_6, entity_3);
}