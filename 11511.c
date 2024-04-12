void fun()
{
  char* entity_0;
  char entity_7[75] = "";
  memset(entity_7, 'R', 75-1);
  entity_7[75-1]='0';
  entity_0 = (char*)malloc(25*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_7);
}