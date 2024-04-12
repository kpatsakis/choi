void fun()
{
  char* entity_6;
  char entity_3[26] = "";
  memset(entity_3, 'p', 26-1);
  entity_3[26-1]='0';
  entity_6 = (char*)malloc(50*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_3);
}