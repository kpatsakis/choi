void fun()
{
  int entity_1 = 65;
  char* entity_5;
  char entity_0[53] = "";
  entity_0 = NULL;
  char entity_3[16] = "";
  entity_3 = NULL;
  memset(entity_3, 'v', 16-1);
  entity_3[16-1]='';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  memset(entity_0, 'j', 53-1);
  entity_0[53-1]='';
  strcpy(entity_5, entity_3);
}