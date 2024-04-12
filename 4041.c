void fun()
{
  int entity_4 = 13;
  char entity_0[67] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 'J', 67-1);
  entity_0[67-1]='';
  entity_7 = (char*)malloc(64*sizeof(char));
  entity_7[64-1]='';
  strcpy(entity_7, entity_0);
}