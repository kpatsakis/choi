void fun()
{
  int entity_9 = 38;
  char* entity_1;
  char entity_7[56] = "";
  entity_7 = NULL;
  memset(entity_7, 'R', 56-1);
  entity_7[56-1]='';
  entity_1 = (char*)malloc(17*sizeof(char));
  entity_1[17-1]='';
  strcpy(entity_1, entity_7);
}