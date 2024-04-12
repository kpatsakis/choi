void fun()
{
  int entity_4 = 68;
  char* entity_5;
  char entity_9[38] = "";
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'r', 38-1);
  entity_9[38-1]='0';
  strcpy(entity_5, entity_9);
}