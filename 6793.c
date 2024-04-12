void fun()
{
  char entity_4[75] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_2[27] = "";
  entity_2 = NULL;
  memset(entity_4, 'E', 75-1);
  entity_4[75-1]='';
  memset(entity_2, 'M', 27-1);
  entity_2[27-1]='';
  entity_9 = (char*)malloc(99*sizeof(char));
  entity_9[99-1]='';
  memcpy(entity_9, entity_4, 75*sizeof(char));
}