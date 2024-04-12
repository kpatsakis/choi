void fun()
{
  char entity_3[59] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'm', 59-1);
  entity_3[59-1]='';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[53-1]='';
  strcpy(entity_7, entity_3);
}