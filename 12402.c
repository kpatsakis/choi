void fun()
{
  int entity_9 = 51;
  char* entity_6;
  char entity_3[18] = "";
  memset(entity_3, 'W', 18-1);
  entity_3[18-1]='0';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_3);
}