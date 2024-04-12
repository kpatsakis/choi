void fun()
{
  int entity_4 = 57;
  char entity_0[27] = "";
  entity_0 = NULL;
  char entity_7[32] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'r', 32-1);
  entity_7[32-1]='';
  memset(entity_0, 'h', 27-1);
  entity_0[27-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memcpy(entity_1, entity_7, 32*sizeof(char));
}