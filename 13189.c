void fun()
{
  int entity_4 = 41;
  int entity_1 = 5;
  char* entity_9;
  char entity_7[87] = "";
  memset(entity_7, 'V', 87-1);
  entity_7[87-1]='0';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[0]='0';
  entity_4 = 100;
  strcpy(entity_9, entity_7);
}