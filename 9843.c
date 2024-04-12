void fun()
{
  char* entity_7;
  char entity_3[43] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(7*sizeof(char));
  entity_7[7-1]='';
  memset(entity_3, 'm', 43-1);
  entity_3[43-1]='';
  strcpy(entity_7, entity_3);
}