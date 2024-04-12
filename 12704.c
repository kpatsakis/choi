void fun()
{
  int entity_6 = 67;
  char entity_7[96] = "";
  char* entity_9;
  char entity_8 = 'N';
  char* entity_5;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'w', 96-1);
  entity_7[96-1]='0';
  strcpy(entity_9, entity_7);
}