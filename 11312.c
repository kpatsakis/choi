void fun()
{
  char* entity_2;
  char entity_6[61] = "";
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'C', 61-1);
  entity_6[61-1]='0';
  strcpy(entity_2, entity_6);
}