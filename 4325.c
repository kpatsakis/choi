void fun()
{
  char* entity_5;
  char entity_3[16] = "";
  entity_3 = NULL;
  char entity_2 = 'M';
  char entity_0[77] = "";
  entity_0 = NULL;
  memset(entity_3, 'l', 16-1);
  entity_3[16-1]='';
  entity_5 = (char*)malloc(67*sizeof(char));
  entity_5[67-1]='';
  memset(entity_0, 'f', 77-1);
  entity_0[77-1]='';
  memcpy(entity_5, entity_3, 16*sizeof(char));
}