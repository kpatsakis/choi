void fun()
{
  char* entity_0;
  char entity_2 = 'j';
  char entity_6[16] = "";
  entity_6 = NULL;
  char entity_1[6] = "";
  entity_1 = NULL;
  memset(entity_6, 't', 16-1);
  entity_6[16-1]='';
  memset(entity_1, 'E', 6-1);
  entity_1[6-1]='';
  entity_0 = (char*)malloc(26*sizeof(char));
  entity_0[26-1]='';
  strcpy(entity_0, entity_6);
}