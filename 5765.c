void fun()
{
  char entity_3[26] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(78*sizeof(char));
  entity_5[78-1]='';
  memset(entity_3, 'g', 26-1);
  entity_3[26-1]='';
  strcpy(entity_5, entity_3);
}