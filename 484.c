void fun()
{
  char* entity_4;
  char entity_6 = 'Y';
  char entity_2[43] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(67*sizeof(char));
  entity_4[67-1]='';
  memset(entity_2, 'P', 43-1);
  entity_2[43-1]='';
  strcpy(entity_4, entity_2);
}