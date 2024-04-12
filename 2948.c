void fun()
{
  int entity_0 = 29;
  char* entity_4;
  char entity_9[20] = "";
  entity_9 = NULL;
  char entity_5 = 'O';
  char entity_6 = 'A';
  memset(entity_9, 'z', 20-1);
  entity_9[20-1]='';
  entity_4 = (char*)malloc(20*sizeof(char));
  entity_4[20-1]='';
  entity_9[entity_0] = 'a';
}