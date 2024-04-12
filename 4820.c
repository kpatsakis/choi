void fun()
{
  int entity_7 = 54;
  char entity_6[70] = "";
  entity_6 = NULL;
  char* entity_8;
  char entity_1 = 'N';
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_6, 'b', 70-1);
  entity_6[70-1]='';
  entity_8 = (char*)malloc(85*sizeof(char));
  entity_8[85-1]='';
  memset(entity_5, 'e', entity_7-1);
  entity_5[entity_7-1]='';
  entity_7 = 48;
  strcpy(entity_8, entity_5);
}