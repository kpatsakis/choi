void fun()
{
  int entity_9 = 18;
  entity_9 = 48;
  char* entity_6;
  char entity_3[34] = "";
  char entity_2 = 'r';
  memset(entity_3, 'v', 34-1);
  entity_3[34-1]='0';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_3);
}