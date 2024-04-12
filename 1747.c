void fun()
{
  char* entity_3;
  char entity_8 = 'k';
  char entity_5[18] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(3*sizeof(char));
  entity_3[3-1]='';
  memset(entity_5, 'a', 18-1);
  entity_5[18-1]='';
  strcpy(entity_3, entity_5);
}