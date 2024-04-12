void fun()
{
  char* entity_5;
  char entity_9 = 'T';
  char entity_1[57] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[41-1]='';
  memset(entity_1, 'U', 57-1);
  entity_1[57-1]='';
  memcpy(entity_5, entity_1, 57*sizeof(char));
}