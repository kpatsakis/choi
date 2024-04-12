void fun()
{
  int entity_1 = 9;
  char entity_6[58] = "";
  entity_6 = NULL;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_5 = 'C';
  char entity_7 = 'M';
  char* entity_4;
  memset(entity_3, 'w', entity_1-1);
  entity_3[entity_1-1]='';
  entity_4 = (char*)malloc(20*sizeof(char));
  entity_4[20-1]='';
  memset(entity_6, 'j', 58-1);
  entity_6[58-1]='';
  strcpy(entity_4, entity_3);
}