void fun()
{
  char entity_8[66] = "";
  entity_8 = NULL;
  char* entity_5;
  char entity_2[24] = "";
  entity_2 = NULL;
  memset(entity_8, 'K', 66-1);
  entity_8[66-1]='';
  entity_5 = (char*)malloc(59*sizeof(char));
  entity_5[59-1]='';
  memset(entity_2, 'L', 24-1);
  entity_2[24-1]='';
  memcpy(entity_5, entity_8, 66*sizeof(char));
}