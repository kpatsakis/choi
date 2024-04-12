void fun()
{
  char entity_0 = 'E';
  char* entity_2;
  char entity_1[84] = "";
  entity_1 = NULL;
  char entity_4[93] = "";
  entity_4 = NULL;
  memset(entity_4, 'G', 93-1);
  entity_4[93-1]='';
  entity_2 = (char*)malloc(88*sizeof(char));
  entity_2[88-1]='';
  memset(entity_1, 'k', 84-1);
  entity_1[84-1]='';
  memcpy(entity_2, entity_4, 93*sizeof(char));
}