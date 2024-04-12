void fun()
{
  char* entity_3;
  char entity_6[75] = "";
  entity_3 = (char*)malloc(19*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'S', 75-1);
  entity_6[75-1]='0';
  strcpy(entity_3, entity_6);
}