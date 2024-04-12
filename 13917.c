void fun()
{
  int entity_6 = 79;
  entity_6 = 100;
  char entity_5[22] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'F', 22-1);
  entity_5[22-1]='0';
  strcpy(entity_4, entity_5);
}