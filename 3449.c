void fun()
{
  int entity_2 = 5;
  char entity_4[31] = "";
  entity_4 = NULL;
  char* entity_5;
  char* entity_7;
  char entity_6[65] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'X', 65-1);
  entity_6[65-1]='';
  entity_7 = (char*)malloc(63*sizeof(char));
  entity_7[63-1]='';
  memset(entity_4, 'J', 31-1);
  entity_4[31-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  entity_8 = (char*)malloc(79*sizeof(char));
  entity_8[79-1]='';
  strcpy(entity_5, entity_6);
}