void fun()
{
  int entity_5 = 32;
  char entity_0 = 'y';
  char entity_1[38] = "";
  entity_1 = NULL;
  char* entity_4;
  char* entity_6;
  entity_6 = (char*)malloc(3*sizeof(char));
  entity_6[3-1]='';
  memset(entity_1, 'L', 38-1);
  entity_1[38-1]='';
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  strcpy(entity_6, entity_1);
}