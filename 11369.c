void fun()
{
  char* entity_3;
  char entity_2[60] = "";
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'o', 60-1);
  entity_2[60-1]='0';
  strcpy(entity_3, entity_2);
}