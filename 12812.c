void fun()
{
  int entity_3 = 26;
  char* entity_7;
  char entity_9[16] = "";
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'T', 16-1);
  entity_9[16-1]='0';
  strcpy(entity_7, entity_9);
}