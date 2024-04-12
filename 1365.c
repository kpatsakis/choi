void fun()
{
  char entity_0[43] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_3[49] = "";
  entity_3 = NULL;
  char entity_8[47] = "";
  entity_8 = NULL;
  memset(entity_3, 'k', 49-1);
  entity_3[49-1]='';
  memset(entity_0, 'Q', 43-1);
  entity_0[43-1]='';
  memset(entity_8, 's', 47-1);
  entity_8[47-1]='';
  entity_1 = (char*)malloc(8*sizeof(char));
  entity_1[8-1]='';
  memcpy(entity_1, entity_0, 43*sizeof(char));
}