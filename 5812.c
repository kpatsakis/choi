void fun()
{
  char* entity_8;
  char* entity_6;
  char entity_2[88] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(65*sizeof(char));
  entity_6[65-1]='';
  entity_8 = (char*)malloc(53*sizeof(char));
  entity_8[53-1]='';
  memset(entity_2, 'd', 88-1);
  entity_2[88-1]='';
  strcpy(entity_6, entity_2);
}