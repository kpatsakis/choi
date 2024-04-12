void fun()
{
  int entity_8 = 42;
  char entity_9 = 'K';
  char* entity_5;
  char entity_0[15] = "";
  entity_0 = NULL;
  char entity_6 = 'X';
  entity_5 = (char*)malloc(80*sizeof(char));
  entity_5[80-1]='';
  memset(entity_0, 'i', 15-1);
  entity_0[15-1]='';
  memcpy(entity_5, entity_0, 15*sizeof(char));
}