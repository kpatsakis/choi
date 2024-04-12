void fun()
{
  char entity_9[5] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'N', 5-1);
  entity_9[5-1]='';
  entity_5 = (char*)malloc(45*sizeof(char));
  entity_5[45-1]='';
  memcpy(entity_5, entity_9, 5*sizeof(char));
}