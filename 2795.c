void fun()
{
  int entity_7 = 31;
  char entity_6[59] = "";
  entity_6 = NULL;
  char entity_9 = 'C';
  char entity_5 = 'a';
  char* entity_0;
  entity_0 = (char*)malloc(75*sizeof(char));
  entity_0[75-1]='';
  memset(entity_6, 'G', 59-1);
  entity_6[59-1]='';
  memcpy(entity_0, entity_6, 59*sizeof(char));
}