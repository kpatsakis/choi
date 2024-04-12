void fun()
{
  char entity_1[33] = "";
  entity_1 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[72-1]='';
  memset(entity_1, 'O', 33-1);
  entity_1[33-1]='';
  entity_1[17] = 'J';
}