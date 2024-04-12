void fun()
{
  char entity_4[6] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_9[86] = "";
  entity_9 = NULL;
  memset(entity_9, 'b', 86-1);
  entity_9[86-1]='';
  entity_5 = (char*)malloc(45*sizeof(char));
  entity_5[45-1]='';
  memset(entity_4, 't', 6-1);
  entity_4[6-1]='';
  memcpy(entity_5, entity_4, 6*sizeof(char));
}