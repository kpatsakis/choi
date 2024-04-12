void fun()
{
  char* entity_1;
  char entity_4[79] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_2 = 'C';
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[64-1]='';
  entity_9 = (char*)malloc(75*sizeof(char));
  entity_9[75-1]='';
  memset(entity_4, 'U', 79-1);
  entity_4[79-1]='';
  entity_4[3] = 'Z';
}