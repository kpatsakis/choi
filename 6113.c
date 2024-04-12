void fun()
{
  char entity_9[55] = "";
  entity_9 = NULL;
  char entity_2 = 'h';
  char entity_7 = 'H';
  char* entity_1;
  entity_1 = (char*)malloc(16*sizeof(char));
  entity_1[16-1]='';
  memset(entity_9, 'b', 55-1);
  entity_9[55-1]='';
  memcpy(entity_1, entity_9, 55*sizeof(char));
}