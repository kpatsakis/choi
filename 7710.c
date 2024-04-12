void fun()
{
  int entity_1 = 36;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char entity_6[94] = "";
  entity_6 = NULL;
  char* entity_9;
  memset(entity_8, 'Q', entity_1-1);
  entity_8[entity_1-1]='';
  entity_9 = (char*)malloc(64*sizeof(char));
  entity_9[64-1]='';
  memset(entity_6, 'p', 94-1);
  entity_6[94-1]='';
  entity_1 = 3;
  entity_8[62] = 'r';
}