void fun()
{
  char entity_6[47] = "";
  char* entity_4;
  memset(entity_6, 'O', 47-1);
  entity_6[47-1]='0';
  entity_4 = (char*)malloc(80*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_6);
}