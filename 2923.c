void fun()
{
  int entity_3 = 90;
  int entity_1 = 33;
  entity_1 = 33;
  char entity_4[24] = "";
  entity_4 = NULL;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_2;
  char* entity_5;
  memset(entity_0, 'R', entity_1-1);
  entity_0[entity_1-1]='';
  entity_5 = (char*)malloc(18*sizeof(char));
  entity_5[18-1]='';
  entity_2 = (char*)malloc(63*sizeof(char));
  entity_2[63-1]='';
  memset(entity_4, 'T', 24-1);
  entity_4[24-1]='';
  strcpy(entity_2, entity_0);
}