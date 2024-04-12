void fun()
{
  char entity_4[47] = "";
  entity_4 = NULL;
  char* entity_6;
  char entity_5[62] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'A', 62-1);
  entity_5[62-1]='';
  entity_6 = (char*)malloc(77*sizeof(char));
  entity_6[77-1]='';
  entity_7 = (char*)malloc(15*sizeof(char));
  entity_7[15-1]='';
  memset(entity_4, 'V', 47-1);
  entity_4[47-1]='';
  memcpy(entity_6, entity_4, 47*sizeof(char));
}