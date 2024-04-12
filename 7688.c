void fun()
{
  char* entity_7;
  char* entity_9;
  char entity_4[86] = "";
  entity_4 = NULL;
  char entity_2[11] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(21*sizeof(char));
  entity_9[21-1]='';
  memset(entity_4, 'J', 86-1);
  entity_4[86-1]='';
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[21-1]='';
  memset(entity_2, 'Y', 11-1);
  entity_2[11-1]='';
  memcpy(entity_9, entity_2, 11*sizeof(char));
}