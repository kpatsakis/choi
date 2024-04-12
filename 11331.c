void fun()
{
  char* entity_8;
  char* entity_9;
  char entity_4[18] = "";
  memset(entity_4, 'f', 18-1);
  entity_4[18-1]='0';
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[0]='0';
  entity_9 = (char*)malloc(53*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_8, entity_4);
}