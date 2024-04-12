void fun()
{
  char entity_6[37] = "";
  char entity_3 = 'H';
  char* entity_7;
  memset(entity_6, 'D', 37-1);
  entity_6[37-1]='0';
  entity_7 = (char*)malloc(54*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_6);
}