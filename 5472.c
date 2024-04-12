void fun()
{
  int entity_8 = 44;
  char* entity_0;
  char entity_4[26] = "";
  entity_4 = NULL;
  char entity_1[60] = "";
  entity_1 = NULL;
  memset(entity_1, 'T', 60-1);
  entity_1[60-1]='';
  entity_0 = (char*)malloc(75*sizeof(char));
  entity_0[75-1]='';
  memset(entity_4, 'x', 26-1);
  entity_4[26-1]='';
  memcpy(entity_0, entity_1, 60*sizeof(char));
}