void fun()
{
  int entity_2 = 69;
  char* entity_5;
  char* entity_4;
  char entity_7[39] = "";
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[0]='0';
  entity_4 = (char*)malloc(2*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'w', 39-1);
  entity_7[39-1]='0';
  strcpy(entity_5, entity_7);
}