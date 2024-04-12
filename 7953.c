void fun()
{
  char* entity_7;
  char entity_4[75] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 'f', 75-1);
  entity_4[75-1]='';
  entity_7 = (char*)malloc(77*sizeof(char));
  entity_7[77-1]='';
  entity_6 = (char*)malloc(45*sizeof(char));
  entity_6[45-1]='';
  memcpy(entity_7, entity_4, 75*sizeof(char));
}