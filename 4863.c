void fun()
{
  char entity_1[65] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_9 = 'M';
  char entity_6 = 'N';
  entity_4 = (char*)malloc(56*sizeof(char));
  entity_4[56-1]='';
  memset(entity_1, 'k', 65-1);
  entity_1[65-1]='';
  memcpy(entity_4, entity_1, 65*sizeof(char));
}