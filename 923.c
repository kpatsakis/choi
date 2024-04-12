void fun()
{
  char* entity_2;
  char entity_3[90] = "";
  entity_3 = NULL;
  memset(entity_3, 'a', 90-1);
  entity_3[90-1]='';
  entity_2 = (char*)malloc(10*sizeof(char));
  entity_2[10-1]='';
  strcpy(entity_2, entity_3);
}