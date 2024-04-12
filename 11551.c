void fun()
{
  char entity_6[1] = "";
  char* entity_7;
  memset(entity_6, 'M', 1-1);
  entity_6[1-1]='0';
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_6);
}