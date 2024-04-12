void fun()
{
  int entity_1 = 82;
  char entity_7[13] = "";
  entity_7 = NULL;
  char entity_4[9] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'r', 9-1);
  entity_4[9-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_7, 'H', 13-1);
  entity_7[13-1]='';
  memcpy(entity_0, entity_4, 9*sizeof(char));
}