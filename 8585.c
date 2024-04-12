void fun()
{
  char* entity_6;
  char* entity_7;
  char* entity_1;
  char entity_4[11] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(26*sizeof(char));
  entity_6[26-1]='';
  entity_1 = (char*)malloc(77*sizeof(char));
  entity_1[77-1]='';
  memset(entity_4, 'D', 11-1);
  entity_4[11-1]='';
  entity_7 = (char*)malloc(11*sizeof(char));
  entity_7[11-1]='';
  strcpy(entity_6, entity_4);
}