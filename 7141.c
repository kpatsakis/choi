void fun()
{
  char entity_3[17] = "";
  entity_3 = NULL;
  char entity_1[21] = "";
  entity_1 = NULL;
  char* entity_4;
  char* entity_9;
  memset(entity_3, 'c', 17-1);
  entity_3[17-1]='';
  entity_4 = (char*)malloc(5*sizeof(char));
  entity_4[5-1]='';
  entity_9 = (char*)malloc(7*sizeof(char));
  entity_9[7-1]='';
  memset(entity_1, 'j', 21-1);
  entity_1[21-1]='';
  memcpy(entity_4, entity_1, 21*sizeof(char));
}