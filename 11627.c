void fun()
{
  char entity_3[42] = "";
  char entity_6[75] = "";
  char* entity_5;
  entity_5 = (char*)malloc(80*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'M', 42-1);
  entity_3[42-1]='0';
  memset(entity_6, 'm', 75-1);
  entity_6[75-1]='0';
  memcpy(entity_5, entity_6, 75*sizeof(char));
}