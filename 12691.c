void fun()
{
  int entity_7 = 16;
  char* entity_9;
  char entity_3[37] = "";
  memset(entity_3, 'S', 37-1);
  entity_3[37-1]='0';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_3);
}