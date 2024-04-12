void fun()
{
  char* entity_2;
  char entity_9 = 'H';
  char entity_1[21] = "";
  entity_1 = NULL;
  char entity_7[55] = "";
  entity_7 = NULL;
  memset(entity_7, 's', 55-1);
  entity_7[55-1]='';
  entity_2 = (char*)malloc(38*sizeof(char));
  entity_2[38-1]='';
  memset(entity_1, 't', 21-1);
  entity_1[21-1]='';
  memcpy(entity_2, entity_1, 21*sizeof(char));
}