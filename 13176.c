void fun()
{
  int entity_9 = 45;
  char entity_5[29] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'o', 29-1);
  entity_5[29-1]='0';
  entity_9 = 21;
  strcpy(entity_4, entity_5);
}