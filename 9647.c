void fun()
{
  int entity_3 = 94;
  char entity_7[22] = "";
  entity_7 = NULL;
  char* entity_0;
  char entity_9[64] = "";
  entity_9 = NULL;
  memset(entity_9, 'a', 64-1);
  entity_9[64-1]='';
  memset(entity_7, 'g', 22-1);
  entity_7[22-1]='';
  entity_0 = (char*)malloc(44*sizeof(char));
  entity_0[44-1]='';
  entity_7[entity_3] = 'U';
}