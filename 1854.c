void fun()
{
  char* entity_2;
  char entity_1 = 'x';
  char entity_8[61] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(94*sizeof(char));
  entity_2[94-1]='';
  memset(entity_8, 'M', 61-1);
  entity_8[61-1]='';
  strcpy(entity_2, entity_8);
}