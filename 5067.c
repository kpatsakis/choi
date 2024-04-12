void fun()
{
  int entity_2 = 4;
  char entity_4[56] = "";
  entity_4 = NULL;
  char* entity_1;
  char entity_3[53] = "";
  entity_3 = NULL;
  char entity_9 = 'x';
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[23-1]='';
  memset(entity_3, 'c', 53-1);
  entity_3[53-1]='';
  memset(entity_4, 'E', 56-1);
  entity_4[56-1]='';
  entity_3[entity_2] = 'I';
}