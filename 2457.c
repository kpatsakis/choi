void fun()
{
  char* entity_6;
  char entity_3[13] = "";
  entity_3 = NULL;
  char entity_4[32] = "";
  entity_4 = NULL;
  char* entity_2;
  char* entity_8;
  memset(entity_3, 'k', 13-1);
  entity_3[13-1]='';
  memset(entity_4, 'e', 32-1);
  entity_4[32-1]='';
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[99-1]='';
  entity_8 = (char*)malloc(77*sizeof(char));
  entity_8[77-1]='';
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[44-1]='';
  memcpy(entity_6, entity_4, 32*sizeof(char));
}