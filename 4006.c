void fun()
{
  char entity_0[75] = "";
  entity_0 = NULL;
  char entity_9 = 'j';
  char* entity_5;
  memset(entity_0, 'l', 75-1);
  entity_0[75-1]='';
  entity_5 = (char*)malloc(94*sizeof(char));
  entity_5[94-1]='';
  memcpy(entity_5, entity_0, 75*sizeof(char));
}