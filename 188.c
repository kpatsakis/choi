void fun()
{
  char* entity_3;
  char entity_0[47] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(52*sizeof(char));
  entity_3[52-1]='';
  memset(entity_0, 't', 47-1);
  entity_0[47-1]='';
  memcpy(entity_3, entity_0, 47*sizeof(char));
}