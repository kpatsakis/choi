void fun()
{
  int entity_1 = 13;
  int entity_9 = 9;
  char entity_6[85] = "";
  char entity_8 = 'd';
  char* entity_2;
  memset(entity_6, 'f', 85-1);
  entity_6[85-1]='0';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_6);
}