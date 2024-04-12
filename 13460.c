void fun()
{
  int entity_2 = 16;
  int entity_1 = 45;
  entity_1 = 97;
  char* entity_8;
  char entity_9 = 'G';
  char entity_7[70] = "";
  memset(entity_7, 'm', 70-1);
  entity_7[70-1]='0';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_7);
}