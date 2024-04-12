void fun()
{
  char* entity_8;
  char entity_5[12] = "";
  entity_5 = NULL;
  char* entity_4;
  char entity_2[57] = "";
  entity_2 = NULL;
  memset(entity_5, 'l', 12-1);
  entity_5[12-1]='';
  entity_4 = (char*)malloc(50*sizeof(char));
  entity_4[50-1]='';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[74-1]='';
  memset(entity_2, 'l', 57-1);
  entity_2[57-1]='';
  memcpy(entity_4, entity_5, 12*sizeof(char));
}