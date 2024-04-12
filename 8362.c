void fun()
{
  int entity_0 = 72;
  char entity_1[53] = "";
  entity_1 = NULL;
  char entity_9 = 'K';
  char* entity_2;
  char entity_6[73] = "";
  entity_6 = NULL;
  memset(entity_6, 'X', 73-1);
  entity_6[73-1]='';
  memset(entity_1, 'K', 53-1);
  entity_1[53-1]='';
  entity_2 = (char*)malloc(86*sizeof(char));
  entity_2[86-1]='';
  entity_0 = 56;
  entity_1[entity_0] = 'f';
}