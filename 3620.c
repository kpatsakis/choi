void fun()
{
  char entity_7[88] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_7, 'R', 88-1);
  entity_7[88-1]='';
  entity_0 = (char*)malloc(52*sizeof(char));
  entity_0[52-1]='';
  memcpy(entity_0, entity_7, 88*sizeof(char));
}