void fun()
{
  char* entity_5;
  char entity_7[28] = "";
  entity_7 = NULL;
  entity_5 = (char*)malloc(40*sizeof(char));
  entity_5[40-1]='';
  memset(entity_7, 'i', 28-1);
  entity_7[28-1]='';
  strcpy(entity_5, entity_7);
}