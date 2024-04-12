void fun()
{
  char entity_6[25] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(57*sizeof(char));
  entity_1[57-1]='';
  memset(entity_6, 'O', 25-1);
  entity_6[25-1]='';
  strcpy(entity_1, entity_6);
}