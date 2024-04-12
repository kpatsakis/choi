void fun()
{
  int entity_0 = 69;
  char* entity_2;
  char* entity_9;
  char entity_5[4] = "";
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[0]='0';
  entity_9 = (char*)malloc(20*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'z', 4-1);
  entity_5[4-1]='0';
  strcpy(entity_2, entity_5);
}