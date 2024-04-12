void fun()
{
  int entity_6 = 49;
  entity_6 = 27;
  char* entity_1;
  char entity_8[60] = "";
  char entity_9 = 'c';
  memset(entity_8, 'I', 60-1);
  entity_8[60-1]='0';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_8);
}