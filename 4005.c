void fun()
{
  char* entity_9;
  char entity_7[55] = "";
  entity_7 = NULL;
  char entity_6 = 'b';
  char* entity_4;
  entity_9 = (char*)malloc(86*sizeof(char));
  entity_9[86-1]='';
  memset(entity_7, 'M', 55-1);
  entity_7[55-1]='';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[42-1]='';
  memcpy(entity_9, entity_7, 55*sizeof(char));
}