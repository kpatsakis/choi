void fun()
{
  int entity_1 = 15;
  char* entity_3;
  char* entity_8;
  char entity_5[67] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_7 = 'G';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[21-1]='';
  entity_3 = (char*)malloc(53*sizeof(char));
  entity_3[53-1]='';
  memset(entity_5, 'G', 67-1);
  entity_5[67-1]='';
  strcpy(entity_8, entity_5);
}