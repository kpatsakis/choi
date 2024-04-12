void fun()
{
  char entity_5[61] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(74*sizeof(char));
  entity_2[74-1]='';
  memset(entity_5, 'o', 61-1);
  entity_5[61-1]='';
  strcpy(entity_2, entity_5);
}