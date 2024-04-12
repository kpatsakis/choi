void fun()
{
  char entity_6[42] = "";
  char* entity_5;
  char entity_9[89] = "";
  memset(entity_9, 'I', 89-1);
  entity_9[89-1]='0';
  entity_5 = (char*)malloc(47*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'g', 42-1);
  entity_6[42-1]='0';
  memcpy(entity_5, entity_6, 42*sizeof(char));
}