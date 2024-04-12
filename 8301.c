void fun()
{
  int entity_4 = 41;
  entity_4 = 82;
  char entity_1[99] = "";
  entity_1 = NULL;
  char* entity_7;
  char entity_5[31] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_5, 'z', 31-1);
  entity_5[31-1]='';
  memset(entity_1, 'z', 99-1);
  entity_1[99-1]='';
  entity_6 = (char*)malloc(76*sizeof(char));
  entity_6[76-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  strcpy(entity_7, entity_5);
}