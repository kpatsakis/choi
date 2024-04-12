void fun()
{
  char entity_9[79] = "";
  entity_9 = NULL;
  char entity_6[96] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(21*sizeof(char));
  entity_2[21-1]='';
  memset(entity_9, 'Q', 79-1);
  entity_9[79-1]='';
  memset(entity_6, 'e', 96-1);
  entity_6[96-1]='';
  memcpy(entity_2, entity_9, 79*sizeof(char));
}