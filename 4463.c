void fun()
{
  int entity_6 = 98;
  char* entity_8;
  char entity_9[34] = "";
  entity_9 = NULL;
  memset(entity_9, 'w', 34-1);
  entity_9[34-1]='';
  entity_8 = (char*)malloc(38*sizeof(char));
  entity_8[38-1]='';
  entity_9[33] = 'c';
}