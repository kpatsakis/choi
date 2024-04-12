void fun()
{
  int entity_2 = 58;
  char entity_7 = 'X';
  char* entity_1;
  char entity_9[24] = "";
  entity_9 = NULL;
  char entity_5[25] = "";
  entity_5 = NULL;
  memset(entity_5, 'O', 25-1);
  entity_5[25-1]='';
  memset(entity_9, 'n', 24-1);
  entity_9[24-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memcpy(entity_1, entity_5, 25*sizeof(char));
}