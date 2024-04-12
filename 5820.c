void fun()
{
  char entity_2 = 'U';
  char entity_0[13] = "";
  entity_0 = NULL;
  char entity_4[52] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_1 = 'e';
  memset(entity_4, 'y', 52-1);
  entity_4[52-1]='';
  memset(entity_0, 'J', 13-1);
  entity_0[13-1]='';
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[22-1]='';
  memcpy(entity_3, entity_0, 13*sizeof(char));
}