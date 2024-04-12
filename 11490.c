void fun()
{
  char* entity_7;
  char* entity_9;
  char entity_4[96] = "";
  char entity_8 = 'n';
  memset(entity_4, 'd', 96-1);
  entity_4[96-1]='0';
  entity_9 = (char*)malloc(18*sizeof(char));
  entity_9[0]='0';
  entity_7 = (char*)malloc(89*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_4);
}