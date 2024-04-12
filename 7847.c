void fun()
{
  char entity_2[57] = "";
  entity_2 = NULL;
  char* entity_0;
  char* entity_5;
  char entity_4[23] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(73*sizeof(char));
  entity_5[73-1]='';
  memset(entity_2, 'e', 57-1);
  entity_2[57-1]='';
  memset(entity_4, 'w', 23-1);
  entity_4[23-1]='';
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[10-1]='';
  memcpy(entity_0, entity_2, 57*sizeof(char));
}