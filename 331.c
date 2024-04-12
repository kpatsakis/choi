void fun()
{
  char* entity_8;
  char entity_2[71] = "";
  entity_2 = NULL;
  memset(entity_2, 'g', 71-1);
  entity_2[71-1]='';
  entity_8 = (char*)malloc(61*sizeof(char));
  entity_8[61-1]='';
  strcpy(entity_8, entity_2);
}