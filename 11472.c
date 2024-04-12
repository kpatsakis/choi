void fun()
{
  char entity_6[16] = "";
  char entity_3[29] = "";
  char* entity_1;
  memset(entity_6, 'Y', 16-1);
  entity_6[16-1]='0';
  entity_1 = (char*)malloc(27*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'O', 29-1);
  entity_3[29-1]='0';
  strcpy(entity_1, entity_3);
}