void fun()
{
  char entity_9 = 'R';
  char* entity_4;
  char entity_1 = 'q';
  char entity_7[55] = "";
  entity_7 = NULL;
  memset(entity_7, 'p', 55-1);
  entity_7[55-1]='';
  entity_4 = (char*)malloc(90*sizeof(char));
  entity_4[90-1]='';
  memcpy(entity_4, entity_7, 55*sizeof(char));
}