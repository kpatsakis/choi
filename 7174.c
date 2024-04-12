void fun()
{
  char* entity_2;
  char* entity_7;
  char entity_1[34] = "";
  entity_1 = NULL;
  char entity_5 = 'm';
  entity_7 = (char*)malloc(51*sizeof(char));
  entity_7[51-1]='';
  entity_2 = (char*)malloc(33*sizeof(char));
  entity_2[33-1]='';
  memset(entity_1, 'V', 34-1);
  entity_1[34-1]='';
  memcpy(entity_7, entity_1, 34*sizeof(char));
}