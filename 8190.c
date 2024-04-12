void fun()
{
  char* entity_6;
  char* entity_7;
  char entity_4[4] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', 4-1);
  entity_4[4-1]='';
  entity_6 = (char*)malloc(93*sizeof(char));
  entity_6[93-1]='';
  entity_7 = (char*)malloc(65*sizeof(char));
  entity_7[65-1]='';
  memcpy(entity_7, entity_4, 4*sizeof(char));
}