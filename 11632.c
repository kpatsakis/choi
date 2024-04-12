void fun()
{
  char* entity_7;
  char entity_1[29] = "";
  memset(entity_1, 'R', 29-1);
  entity_1[29-1]='0';
  entity_7 = (char*)malloc(44*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_1);
}