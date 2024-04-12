void fun()
{
  char entity_9[26] = "";
  entity_9 = NULL;
  char* entity_8;
  char entity_5 = 'T';
  char entity_2[93] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(79*sizeof(char));
  entity_8[79-1]='';
  memset(entity_2, 'x', 93-1);
  entity_2[93-1]='';
  memset(entity_9, 'S', 26-1);
  entity_9[26-1]='';
  memcpy(entity_8, entity_9, 26*sizeof(char));
}