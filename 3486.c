void fun()
{
  int entity_4 = 39;
  char entity_8[76] = "";
  entity_8 = NULL;
  char* entity_3;
  char* entity_6;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_8, 'w', 76-1);
  entity_8[76-1]='';
  memset(entity_2, 'K', entity_4-1);
  entity_2[entity_4-1]='';
  entity_6 = (char*)malloc(63*sizeof(char));
  entity_6[63-1]='';
  entity_3 = (char*)malloc(33*sizeof(char));
  entity_3[33-1]='';
  entity_4 = 5;
  strcpy(entity_6, entity_2);
}