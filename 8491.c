void fun()
{
  char* entity_5;
  char entity_3[27] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(71*sizeof(char));
  entity_5[71-1]='';
  memset(entity_3, 'i', 27-1);
  entity_3[27-1]='';
  strcpy(entity_5, entity_3);
}