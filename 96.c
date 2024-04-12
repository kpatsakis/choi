void fun()
{
  char* entity_7;
  char entity_5[14] = "";
  entity_5 = NULL;
  entity_7 = (char*)malloc(28*sizeof(char));
  entity_7[28-1]='';
  memset(entity_5, 'G', 14-1);
  entity_5[14-1]='';
  memcpy(entity_7, entity_5, 14*sizeof(char));
}